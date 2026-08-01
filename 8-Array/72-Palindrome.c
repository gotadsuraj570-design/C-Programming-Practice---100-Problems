#include<stdio.h>
void palin(int arr[] ,int size);
int main() {
  int size;
  int array[100];
  int i=-1;
  printf("The last number of array is always 0 for termination and it not count in array\n");
  do{
    i++;
    printf("Enter the number %d :",i+1);
    scanf("%d",&array[i]);
  } while(array[i]!=0);
  size=i;
  printf("\nThe array is : [ ");
  for(int i=0;i<size;i++)
  {
    printf("%d ",array[i]);
  }
  printf("]");

  palin(array,size);

  return 0;
}
void palin(int arr[],int size)
{
  int palin=1;
  for(int i=0;i<size/2;i++)
  {
    if(arr[i]!=arr[size-i-1])
    {
      printf("\nThe array is NOT Palindrome");
      palin=0;
      break;
    } 
  }
  if(palin==1)
  {
      printf("\nThe array is  Palindrome"); 
  }
}