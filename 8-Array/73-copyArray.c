#include <stdio.h>
void copy_array(char arr[],int size,char copyarr[]);
void print_array(char arr[],int size);
int main(){
  char arr[]={'h','e','l','l','o'};
  int size=5;
  char copyarr[size]; 
  printf("The original array is : ");
  print_array(arr,size);
  copy_array(arr,size,copyarr);
  printf("\nThe copied array is : ");
  print_array(copyarr,size);

  return 0;
}

void print_array(char arr[],int size){
  for(int i=0;i<size;i++)
  {
    printf("%c ",arr[i]);
  }
}
void copy_array(char arr[],int size,char copyarr[])
{
  for(int i=0;i<size;i++)
  {
    copyarr[i]=arr[i];
  }
}