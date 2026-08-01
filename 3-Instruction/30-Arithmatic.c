#include <stdio.h>
int main() {
   
  int sign;
  do{
    printf("\n==========Wlcome to Calculator============");
    printf("\n1]Adition\n2]Substractioin\n3]Multiplication\n4]Division\n5]Exit");
    printf("\nEnter your Choice(1-4):");
    scanf("%d",&sign);

    switch(sign)
    {
      case 1:float n1,n2;
             printf("Enter the first NUmber:");
             scanf("%f",&n1);
             printf("Enter the Second NUmber:");
             scanf("%f",&n2);
             printf("The Adition is:%f",n1+n2);
             break;  
      case 2:float n3,n4;
             printf("Enter the first NUmber:");
             scanf("%f",&n3);
             printf("Enter the Second NUmber:");
             scanf("%f",&n4);
             printf("The Adition is:%f",n3-n4);
             break;  
      case 3:float n5,n6;
             printf("Enter the first NUmber:");
             scanf("%f",&n5);
             printf("Enter the Second NUmber:");
             scanf("%f",&n6);
             printf("The Adition is:%f",n5*n6);
             break;  
      case 4:float n7,n8;
             printf("Enter the first NUmber:");
             scanf("%f",&n7);
             printf("Enter the Second NUmber:");
             scanf("%f",&n8);
             if(n8!=0)
             {
             printf("\nThe Division is:%f",n7/n8);  
             }
             else
             {
              printf("\nUndefined");
             }
             break;  
      case 5:printf("\nProgram Exited Successfully");
             break;    
      default:printf("\nEnter valid Choice betwen (1-5)");                            
    }

     
  }
  while(sign!=5);
  return 0;

}