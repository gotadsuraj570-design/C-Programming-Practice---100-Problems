#include <stdio.h>
int main() {
  int num;
  printf("Enter the number:");
  scanf("%d",&num);   //5372
  
  int n1,n2,n3,n4,n5,n6,n7,n8,n9;
  n1=num/1000;   //5 = n1                //it is only for less than or = to 4 digit
  n2=n1*1000;    //5000 =n2

  n3=num-n2;     //5372-5000=372
  n4=n3/100;     //3 = n4
  n5=n4*100;     //300 = n5

  n6=n3-n5;      //372-300=72=n6
  n7=n6/10;      //7
  n8=n7*10;      //70

  n9=n6-n8;      //72-70=2

  printf("The sum of digit is:%d",n1+n4+n7+n9);
  return 0;




}