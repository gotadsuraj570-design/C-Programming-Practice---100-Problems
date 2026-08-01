#include <stdio.h>
int main() {
  int mark;
  printf("Enter your marks:");
  scanf("%d",&mark);

  if (mark>=90)
  {
    printf("Grade A");
  }

  else if (mark>=75)
  {
    printf("Grade B");
  }

  else if (mark>=60)
  {
    printf("Grade C");
  }

  else if (mark>=30)
  {
    printf("Grade D");
  }

  else
  {
    printf("Grade E");
  }

return 0;

}