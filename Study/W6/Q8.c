#include <stdio.h>

typedef enum{
  Mon,
  Tue,
  Wed,
  Thu,
  Fri,
  Sat,
  Sun
} Weekday;

struct Date {
  int year;
  int month;
  int day;
  Weekday weekday;
} ;

int main(){
  struct Date currentDate = {2025,11,18,Tue};
}
