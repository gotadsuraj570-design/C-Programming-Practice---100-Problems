#include <stdio.h>
int main() {
  int year;
  printf("enter the year:");
  scanf("%d",&year);

  if(year%4==0)
  {
    printf("The year is leap year");
  }
  else
  {
    printf("This is not Leap Year");
  }
  return 0;
}