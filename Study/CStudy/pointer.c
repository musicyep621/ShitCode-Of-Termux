#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char* lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

int main(){
  int nlines;

  if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
    qsort(lineptr, 0, nlines - 1);
    writelines(lineptr, nlines);
    return 0;
  } else{
    printf("error: input to big to sort\n");
    return 1;
  }
}

#define MAXLEN 1000
char *alloc(int);

int getl (char *s, int maxline) {
  int c, i;

  for (i = 0; i < maxline - 1 && (c= getchar()) != EOF && c != '\n'; ++i) s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

int readlines(char *lineptr[], int maxlines){
  int len, nlines;
  char *p, line[MAXLEN];
  nlines = 0;
  while ((len =getl(line, MAXLEN)) > 0) {
    if (nlines >= maxlines || (p = alloc(len)) == NULL)
      return -1;
    else {
      line[len - 1] = '\0';
      strcpy(p,line);
      lineptr[nlines++] = p;
    } 
  }
  return nlines;
}
