#include <stdio.h>

int stringLen(char *str){
  int n = 0;
  while (*str++ != '\0') n ++;
  return n;
}

int main(){
  char str[] = "HelloWorld";
  printf("strlen is %d", stringLen(str));
}
