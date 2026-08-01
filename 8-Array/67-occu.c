#include <stdio.h>
void print_array(int array[],int size);
int main() {
     int size=7;
     int arr[size];
     for(int i=0;i<size;i++)
        { 
           printf("Enter the number %d: ",i+1);
           scanf(" %d",&arr[i]);
        }
print_array(arr,size);
      
      int num;
      do{
      printf("\nEnter the number that you try to find occourance: ");
      scanf("%d",&num);
      
int count = 0; 
 for (int i=0;i<size;i++)
    {
      if (num==arr[i])
        {
           count=count+1;
        }
    }
printf("\nthe No. of Occourences of %d is %d",num,count); 
  } while(num!=0);
printf("\nThe program is terminated because you entered 0");  
return 0;

}  

void print_array(int array[],int size)
{
   for(int i=0;i<size;i++)
     { 
       printf("\nThe %dth number is:%d",i+1,array[i]);
     }
} 