#include <stdio.h>
int main() {
    int size=5;
    float arr[size];
    float sum=0;
    for(int i=0; i<size;i++)
     {
        printf("Enter the number %d: ",i+1);
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
     }
    float avg;
    avg=sum/size;
    printf("\nThe sum of %f %f %f %f %f  is :%f",arr[0],arr[1],arr[2],arr[3],arr[4],sum);
    printf("\nThe avg  is :%f",avg);
return 0;

}    