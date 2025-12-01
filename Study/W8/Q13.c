#include <stdio.h>

void findMaxMin(int *x, int *y, int *z, int *max, int *min){
  *max = (*x > *y) ? ((*x > *z) ? *x : *z) : ((*y > *z) ? *y : *z);
  *min = (*x < *y) ? ((*x < *z) ? *x : *z) : ((*y < *z) ? *y : *z);
}

int main(){
  int x = 5;
  int y = 10;
  int z = 2;
  int max, min;
  findMaxMin(&x, &y, &z, &max, &min);
  printf("The max is %d, the min is %d\n", max, min);
  return 0;
}
