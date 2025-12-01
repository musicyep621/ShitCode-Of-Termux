#include <stdio.h>
#include <stdbool.h>

bool search(int *arr, int size, int x){
  for(int i = 0; i < size; i ++){
    if (arr[i] == x){
      return true;
    }
  }
  return false;
}

int main(){
  const int size = 10;
  int ray[size] = {23,323,13,324,432,5,524,423,43,21};
  if(search(ray, size, 43)){
    printf("yes");
  }
}
