#include <stdio.h>
int main() {

    int i=5;
    printf("%d\n",i);   //5
    printf("%d\n",i--);  //5
    printf("%d\n",i);   //4

    printf("+++++++++++++++++++++\n");
    int a=5;
    printf("%d\n",a);  //5
    printf("%d\n",--a);   //4
    printf("%d\n",a);   

    printf("==============================================================");

    int b=1;
    while(b<=5)
    {
        printf("%d\n",b);
        ++b;
    }




    return 0;
}