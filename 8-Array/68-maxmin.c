#include <stdio.h>
void print_array(int array[],int size);
void min(int array[],int size);
int max (int array[],int size);

int main() {
     int size=7;
     int arr[size];
     for(int i=0;i<size;i++)
        { 
           printf("Enter the number %d: ",i+1);
           scanf("%d",&arr[i]);
        }
print_array(arr,size);
min(arr,size);
int maximum=max(arr,size);
printf("\nThe max is=%d",maximum);


return 0;

}  

void print_array(int array[],int size)
{
   for(int i=0;i<size;i++)
     { 
       printf("\nThe %dth number is:%d",i+1,array[i]);
     }
}   

void min(int array[],int size) 
{   int min=0;
    for(int i=0;i<size-1;i++)
      { 
         if(i==0)
            {
               min=array[i];
             }
         if (min<array[i+1])
            {
               min=min;
             }
         else
            {
              min=array[i+1];
            }
       }
printf("\nthe min is=%d",min); 
}   

int max(int array[],int size)
{
  int max;
  for(int i=0;i<size-1;i++)
    {
      if(i==0)
       {
          max=array[i];
        }  
      if(max>array[i+1])
        {
          max=max;
        }
      else
         {
           max=array[i+1];
         }
     }
  
   return max;
    
}
