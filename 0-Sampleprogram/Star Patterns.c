#include <stdio.h>
int main() {
  int row;
  printf("Enter the ROW number:");
  scanf("%d",&row);

  for(int i=1;i<=row;i++)
  {
    for (int j=1;j<=row;j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("===================================================================================\n");

    for (int i=1;i<=row;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }

   printf("====================================================================================\n");
   for (int i=1;i<=row;i++)
   {
    for(int j=1;j<=row-i+1;j++)
    {
      printf("*"); 
    }
    printf("\n");
   }

   printf("=====================================================================================\n");
   for (int i=1;i<=row;i++)
   {
    for(int j=1;j<=row-i;j++)
    {
      printf(" ");
    }
    for (int k=1;k<=i;k
      ++)
    {
      printf("*");
    }
    printf("\n");
   }

   printf("=====================================================================================\n");
   for(int i=1;i<=row;i++)
   {
    for (int j=1;j<=i-1;j++)
    {
      printf(" ");
    }
    for(int k=1;k<=row-i+1;k++)
    {
      printf("*");
    }
    printf("\n");
   }

   printf("====================================================================================\n");
   for(int i=1;i<=row;i++)
   {
    for(int j=1;j<=row-i;j++)
    {
      printf(" ");
    }
    for (int k=1;k<=2*i-1;k++)
    {
      printf("*");
    }
    printf("\n");
   }

   printf("===================================================================================\n");
   for(int i=1;i<=row;i++)
   {
    for (int j=1;j<=i-1;j++)
    {
      printf(" ");
    }
    for (int k=1;k<=2*(row-i)+1;k++)
    {
      printf("*");
    }
    printf("\n");
   }

   printf("===================================================================================\n");
   for (int i=1;i<=(row/2)+1;i++)
   {
    for (int j=1;j<=(row/2+1)-i;j++)
    {
      printf(" ");
    }
    for (int k=1;k<=2*(i)-1;k++)
    {
      printf("*");
    }
    printf("\n");
   }

   for (int i=1;i<=(row/2);i++)
   {
    for (int j=1;j<=i;j++)
    {
      printf(" ");
    }
    for (int k=1;k<=2*((row/2)-i)+1;k++)
    {
      printf("*");
    }
    printf("\n");
  } 


  
  return 0;
}