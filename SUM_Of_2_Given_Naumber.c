#include<stdio.h>
int main()
{
  int x;
  printf("Enter First Number\n");
  scanf("%d",&x);// user will give 'x' a value.
  int y;
  printf("Enter Second Number\n");
  scanf("%d",&y);// user will give 'y' a value.
  int sum = x + y;
  printf("Sum Of The Number That You Gave is %d",sum);
  return 0;
}