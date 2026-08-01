#include<stdio.h>
int main() {
  char a;
  char *ptr;
  ptr=&a;
  printf("Enter the character:");
  scanf("%c",ptr);
  printf("character is %c",*ptr);
  return 0;
}