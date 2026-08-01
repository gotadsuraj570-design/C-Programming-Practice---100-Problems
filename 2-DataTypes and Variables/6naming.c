#include <stdio.h>
int main() {

   int age;
   char f_name[20];
   char l_name[20];
  
   
   printf("enter your first name:");
   scanf("%s",&f_name);
   printf("enter your last name:");
   scanf("%s",&l_name);
   printf("enter your age:");
   scanf("%d",&age);

  
   printf("F_NAme:%s\n",f_name);
   printf("L_name:%s\n",l_name);
   printf("Age=%d\n",age);
   return 0;
}