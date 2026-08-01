#include <stdio.h>
int main() {

  int mon;
do
{  printf("\nEnter the number (1-12):");
   scanf("%d",&mon);
  
  switch(mon)
  {
    case 1:printf("Januiary\n");
           break;
    case 2:printf("February\n");
           break;
    case 3:printf("March\n");
           break;
    case 4:printf("April\n");
           break;
    case 5:printf("May\n");
           break;
    case 6:printf("June\n");
           break;
    case 7:printf("July\n");
           break;
    case 8:printf("August\n");
           break;
    case 9:printf("September\n");
           break;
    case 10:printf("October\n");
           break;
    case 11:printf("November\n");
           break;
    case 12:printf("December\n");
           break;
    case -1:printf("\nProgram exited successfully");  
            break;

    default:printf("\nInvalid Choice.\nEnter valid choice between 1-12");
            break;       
  }
}
  while (mon!=-1);
  return 0;

  
 }

 