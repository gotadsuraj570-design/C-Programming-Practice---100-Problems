#include <stdio.h>
int main() {

  float a;
  printf("Enter the number:");
  scanf("%f",&a);
   
  if(a>0){
    printf("Number is Positive");
  }
  else if(a<0){
    printf("The number is Negative");
  }
  else{
    printf("Number is Zero");
  }
  
return 0;
 
}