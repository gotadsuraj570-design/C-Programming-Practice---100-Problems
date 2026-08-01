#include <stdio.h>
int main() {
    int  row;
    printf("Enter the number of row required:");
    scanf("%d",&row);

    for (int i=1;i<=row;i++)
    {
      for (int j=1;j<=i;j++)
      {
        printf("*");
      }
      printf("\n");
    }
    
    printf("++++++++++++++++++++++++++++++++++++++++\n");

    for(int a=1;a<=row;a++)
    {
      for(int b=1;b<=row-a+1;b++)
      {
        printf("*");
      }
      printf("\n");
    }

    printf("++++++++++++++++++++++++++++++++++++++++\n");

    for(int c=1;c<=row;c++)
    {
      for(int d=row;d>=1;d--)
      {
        while(d > c)
        {
          printf(" ");
          d--;
        }
        printf("*");
      }
      printf("\n");
    }
   return 0;
}