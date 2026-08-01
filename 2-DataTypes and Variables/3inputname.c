#include <stdio.h>
int main() {
  
  //  printf("Enter your name:");
  //  char name[20];               //for singl word
  //  scanf("%19s",&name);
  //  printf("%s",name);

   printf("Enterv your name:");
   char name[20];
   fgets(name,sizeof(name),stdin);       //or multiword line
   printf("Welcome %s to KG Coding",name);
  

   return 0;
}