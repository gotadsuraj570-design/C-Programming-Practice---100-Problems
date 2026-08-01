#include <stdio.h>
void rev_array(int arr[],int size);
int main() {
  int num[100];
  int n_size;
  int i=-1;   // because after adding i++ so the index start from the 0

  do{
    i++;
    printf("Enter the number:");
    scanf("%d",&num[i]);
    
  }while(num[i]!=0);
  

  n_size=i+1;
  printf("\nThe original array is: [");
  for (int i=0;i<n_size;i++)
  {
    printf("%d ",num[i]);
  }
    printf("]");

  rev_array(num,n_size);  
  return 0;
}

void rev_array(int arr[],int size)
{
  for(int i=0;i<size/2;i++)
  {
    int temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
  }
  printf("\nThe reverse Array is: [");
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("]");

}
