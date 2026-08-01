#include<stdio.h>
int palin(int,int);
int main() {
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  int rev=palin(num,0);
  if(num==rev)
  {
    printf("NUmber is Palindrome");
  }
  else
  {
    printf("NUmber is  not Palindrome");
  }
  
  return 0;
}
int palin(int num,int rev){
  if (num==0)
  {
    return rev;
  }
  int remain=num%10;
  int new_num=num/10;
  int new_rev=rev*10+remain;
  return palin(new_num,new_rev);

}