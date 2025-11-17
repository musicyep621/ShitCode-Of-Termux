#include <stdio.h>

typedef enum {
  MON,
  TUE,
  WED,
  THU,
  FRI,
  SAT,
  SUN
} Weekday;

int main(){
  int today = TUE;
  switch(today){
    case MON :
    case TUE :
    case WED :
    case THU :
    case FRI :
     printf("Kyo wa WEEKDAY\n");
     break;
    case SAT :
    case SUN :
     printf("Kyo wa WEEDKEND\n");
     break;
  }
}
