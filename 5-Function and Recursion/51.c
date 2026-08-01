#include<stdio.h>
int sum(int,int,int,int);

int main() {
  int a,b,c,d;
  a=5;
  b=10;
  c=3;
  d=2;
  int add=sum(a,b,c,d);
  printf("%d",add);
  return 0;


}

int sum(int a,int b,int c,int d){
    return a+b+c+d;
}