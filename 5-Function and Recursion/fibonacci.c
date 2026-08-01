#include<stdio.h>
// int main() {
//   int num;
//   printf("Enter the num:");
//   scanf("%d",&num);
//   int a=0;
//   int b=1;
//   printf("%d,%d",a,b);
//   do{
//     int c;
//     c=a+b;
//     printf(",%d",c);
//     a=b;
//     b=c;
//   }while(a+b<=num);
//   return 0;

// }


int fibo(int);
int main() {
  int num;
  printf("Enter the position:");
  scanf("%d",&num);

  for (int i=0;i<=num;i++)
  {
     printf(" %d",fibo(i));
  }
  

  return 0;
}
int fibo(int pos){
  if (pos==0 || pos==1)
  {
    return pos;
  }
  int current= fibo(pos-1)+fibo(pos-2);
  return current;

}