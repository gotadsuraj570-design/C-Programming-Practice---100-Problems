#include<stdio.h>
void sortd(int array[],int size);

int main() {
   int size=7;
   int array[size];
   for(int i=0;i<size;i++)
     {
       printf("Enter the %dth number:",i+1);
       scanf("%d",&array[i]);
     }
   
  for (int i=0;i<size;i++)
     {
       printf("\nThe %dth number is %d",i+1,array[i]);
      }
  sortd(array,size); 
  
return 0;
}

void sortd(int array[],int size)
 { 
    int asc=1;
    int dsc=1;
   for(int i=0;i<size-1;i++)
    {
     if(array[i]>=array[i+1])
     {
      asc=0;
     }
     if(array[i]<=array[i+1])
     {
      dsc=0;
     }
    }
     if (asc)        //asc=True(1) / asc==1
     { 
       printf("\nThe array is sorted ascendingly");
     }
     else if(dsc)     //dsc=1(true) / dsc=1
        {
            printf("\nThe array is sorted descendingly");
        }
     else
       {
         printf("\nArray is not sorted");
        }
  }

