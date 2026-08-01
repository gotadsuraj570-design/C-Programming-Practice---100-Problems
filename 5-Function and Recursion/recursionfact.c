#include <stdio.h>

int fact(int);
void loop_fact(int);
int sum(int);

int main() {
  int x=7;
  loop_fact(x);
  int facto=fact(x);
  printf("\nFacto=%d",facto);
  int sumi=sum(x);
  printf("\n%d",sumi);

  return 0;
}

void loop_fact(int x) {
 int fact=1;
  for(int i=1;i<=x;i++)
  {
    fact=i*fact;
  }
  printf("fact=%d",fact);
}
int fact(int x){
   if (x==0)
   {
    return 1;
   }
   return x*fact(x-1);
   
}
int sum(int a){
  if (a==0)
  return 0;
  return a+sum(a-1);
}