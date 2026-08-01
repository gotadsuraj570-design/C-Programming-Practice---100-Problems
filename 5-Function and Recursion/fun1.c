#include <stdio.h>

void add(int ,int);

int main() {

  int x=5,y=3;
  add(x,y);
  return 0;
}

void add(int a,int b){
  printf("%d+%d=%d",a,b,a+b);
}