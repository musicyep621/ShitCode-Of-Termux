#include <stdio.h>
#include <stdbool.h>

bool intCmp(int* str1, int* str2){
  while (*str1 != '\0' && *str1++ == *str2++);
  if (*str1 != *str2) return false;
  return true;
}

int main(){
  int str1[7] = {1, 2, 3, 4, 5, 6, 7};
  int str2[7] = {1, 2, 3, 4, 5, 6, 7};
  if (intCmp(str1,str2)) printf("Equal!");
}
