#include<stdio.h>
void avg(int,int,int,int,int);
int main() {
  int a,s,d,f,g;
  printf("Enter 5 numbers:\n");
  scanf("%d",&a);
  scanf("%d",&s);
  scanf("%d",&d);
  scanf("%d",&f);
  scanf("%d",&g);
  avg(a,s,d,f,g);
  return 0;
}
void avg(int a,int b,int c,int d,int e){
  int sum;
  float avg;
  sum=a+b+c+d+e;
  avg=sum/5.0;
  printf("Avg of %d %d %d %d %d is %f ",a,b,c,d,e,avg);
}