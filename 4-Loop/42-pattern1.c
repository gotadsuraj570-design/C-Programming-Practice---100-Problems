#include <stdio.h>
int main() {
  int row;
  printf("Enter the ROW number:");
  scanf("%d",&row);

  for(int i=1;i<=row;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");

  for(int i=1;i<=row;i++)
  {
    for(int j=row;j>i-1;j--)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");

  for (int i=1;i<=row;i++)
  {
    for(int j=row;j>=1;j--)
    {
      while(j>i)
      {
        printf(" ");
        j--;
      }
      printf("*");
    }
    printf("\n");
  }
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

  printf("%d is largest * in pattern/ (%d total rows)\n",row,row);

  for (int i=1;i<=row;i++)
  {
    for(int j=1;j<=row-i;j++)
    {
      printf(" ");
    }  
    for(int k=1;k<=2*i-1;k++)
      {
        printf("*");
      }
    printf("\n");
    
  }
return 0;
}