#include <stdio.h>
void count_num();
void mul(int,int,int);
int add(int,int,int);

int main()
{
  int n1,n2,n3;
  printf("Enter the number:");
  scanf("%d",&n1);
  printf("Enter the number:");
  scanf("%d",&n2);
  printf("Enter the number:");
  scanf("%d",&n3);
  mul(n1,n2,n3);
  int addii=add(n1,n2,n3);
  count_num();
  printf("\nThe addition:%dX%dX%d=%d",n1,n2,n3,addii);
  
  mul(n1,n2,n3);



  return 0;
}

void count_num() {
  
  for (int i=1;i<=10;i++)
  {
    printf("\n%d",i);
  }
}
void mul(int a,int b,int c) {
   int mult;
   mult=a*b*c;
   printf("\nThe multipicatiion:%dX%dX%d=%d",a,b,c,mult);
   
   
}
int add(int a,int b,int c) {
  int addi;
  addi=a+b+c;
  return addi;
}



// void count();
// int sum(int ,int);
// int main() {
//   int addition=sum(4,9);

//  printf("\n%d\n",addition);
//  count();
//  printf("\n");
//  count();
//  printf("\n");
//  count();
//  printf("\n");
//  int nadd=sum(5,5);
//  printf("\n%d",nadd);

//   return 0;
// }
// int sum(int a,int b){
//   printf("%d",a);
//   printf("\n%d",b);
//   int add=a+b;
//   return add;
// }
// void count()
// {
//   for (int i=1;i<=20;i++)
//   {
//     printf(" %d",i);
//   }
// }

