#include<stdio.h>
void print_array(int arr[],int m_size);
int main() {
  int m_size=5;
  int mark[m_size];
  for(int i=0;i<m_size;i++)
  {
    printf("Enter the marks:");
    scanf("%d",&mark[i]);
  }
  print_array( mark ,m_size);
// for the odd loop it means we not aware about how many elements are present in array but this is wrong way
  int num[100];
  int n_size;
  int i;
  do{
    if(i=0)
    {
      printf("\nEnter the number:");
    scanf("%d",&num[0]);
    }
    i++;
    printf("\nEnter the number:");
    scanf("%d",&num[i]);
  }while(num[i]!=-1);
  
  n_size=i+1;
  print_array(num,n_size);
  
  int num2[]={4,5,8,9,0,5,3};
  int size=sizeof(num2) / sizeof(num2[0]);

  print_array(num2,size);


  return 0;
}
void print_array(int arr[],int size) {
  for(int i=0;i<size;i++)
  {
    printf("\nElement %d=%d",i+1,arr[i]);
  }
}