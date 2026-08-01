#include <stdio.h>
int main() {
  int size=5;
  int Country[size];
  for(int i=0;i<size;i++)
  {
    printf("Enter the Country %d:",i+1);
    scanf("%d",&Country[i]);
  }
  for(int i=0;i<size;i++){
    printf("\nThe Country %d:%d",i+1,Country[i]);
  }
  return 0;
}