#include <stdio.h>
int main() {
    int n1,n2,n3;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter Second number:");
    scanf("%d",&n2);  
    printf("Values %d\t%d",n1,n2);

    n3=n1;
    n1=n2;
    n2=n3;
    printf("\nValues afer swapping %d\t%d",n1,n2);
    
    return 0;
}
