#include<stdio.h>
void del_by_index(int array[],int size);
void del_by_value(int array[],int size);

int main() {
   int size=7;
   int array[size];
   for(int i=0;i<size;i++)
     {
       printf("Enter the %dth number:",i+1);
       scanf("%d",&array[i]);
     }
   printf("\nThe array is=[%d,%d,%d,%d,%d,%d,%d]",array[0],array[1],array[2],array[3],array[4],array[5],array[6]);  

   del_by_index(array,size);
   printf("\n\n\n\n");
   del_by_value(array,size-1);
    



  return 0; 
  }    

void del_by_index(int array[],int size)
{
  int index;
  printf("\nEnter the index(your choice for delete element):");
  scanf("%d",&index);

  if(index>=0 && index<size)
  {
    for(int i=index;i<size-1;i++)
    {
      array[i]=array[i+1];
    }
  size--;  
      printf("\nThe array after the deletion is:[%d,%d,%d,%d,%d,%d]",array[0],array[1],array[2],array[3],array[4],array[5]);
  }
  else
  {
    printf("\nInvalid choice");
  }
  
} 

void del_by_value(int array[],int size)
{
  printf("\nThe array after the deletion is:[%d,%d,%d,%d,%d,%d]",array[0],array[1],array[2],array[3],array[4],array[5]);
  int value;
  printf("\nEnter the value(your chouce for Delet):");
  scanf("%d",&value);

  int index=-1;
  for(int i=0;i<size;i++)
  {
    if(value==array[i])
    {
      index=i;
      break;

    }
  }
  if(index!=-1)
  {
    for(int i=0;i<size;i++)
    {
      if(value==array[i])
      {
        index=i;
        for(int j=index;j<size-1;j++)
        {
          array[j]=array[j+1];
        }
      size--;   
      }
     
    }
    printf("The values after deletion by value:");
    for(int i=0;i<size;i++)
    {
      printf("\n%d",array[i]);
    }
  }
  else
  {
    printf("The value %d is not found",value);
  }
}

