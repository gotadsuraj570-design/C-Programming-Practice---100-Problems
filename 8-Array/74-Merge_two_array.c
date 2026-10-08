#include <stdio.h>
void Sort_the_array(int arr1[],int size1,
                    int arr2[],int size2,
                    int Sort_array[],int size3);


int main(){
   int size1=5;
   int size2=7;
   int size3=12;
   int arr1[5]= { 1,3,5,7,9};
   int arr2[7]= { 2,4,6,8,10,12,14};
   int Sort_array[12];
   printf("The elements of first array is=[");
   for (int i=0;i<size1;i++)
      {
        printf("%d ",arr1[i]);
      }
   printf("]");
   printf("\nThe elements of second array is=[");
   for (int i=0;i<size2;i++)
      {
        printf("%d ",arr2[i]);
      }
   printf("]");   
  
   printf("\n Welcome to merging Sorted Arrays");

   Sort_the_array(arr1,size1,arr2,size2,Sort_array,size3);

   printf("\nThe elements of Sorted  array is=[");
   for (int i=0;i<size3;i++)
      {
        printf("%d ",Sort_array[i]);
      }
   printf("]");  

  return 0;

}
void Sort_the_array(int arr1[],int size1,
                    int arr2[],int size2,
                    int Sort_array[],int size3)
{
   int i=0,j=0,k=0;
   while(i<size1 && j<size2)
   {
    if(arr1[i]<arr2[j])
     {
      Sort_array[k]=arr1[i];
      i++;
     }
     else
     {
      Sort_array[k]=arr2[j];
      j++;
     }
     k++;
   }
   while(i<size1)
   {
    Sort_array[k]=arr1[i];
    i++;
    k++;
   }
   while(j<size2)
   {
    Sort_array[k]=arr2[j];
    j++;
    k++;
   }
}

