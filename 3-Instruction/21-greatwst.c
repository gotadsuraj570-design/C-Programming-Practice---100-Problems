#include <stdio.h>
int main() {

  int a,b,c;
  printf("Enter 1st number:");
  scanf("%d",&a);
  printf("Enter 2nd number:");
  scanf("%d",&b);
  printf("Enter 3rd number:");
  scanf("%d",&c);
   
  if(a>b && a>c)
  {
    printf("\n1st");
  }
  else if(b>a && b>c)
  { 
      printf("\n2nd");
  }
  
  else
  {
    printf("\n3rd");
  }
  
return 0;

}
 