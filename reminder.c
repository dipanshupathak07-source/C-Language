#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter Dividend : ");
  scanf("%d",&a);
  printf("Enter Divisor : ");
  scanf("%d",&b);
  int q = a/b;
  int r = a - b*q;
  printf("The Reminder When %d  Is Divided By %d Is : %d",a,b,r);
  return 0;
}