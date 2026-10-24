#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  printf("Enter Two Number : ");
  scanf("%d %d",&a,&b);
  printf("a + b = %d\n",a + b);
  printf("a - b = %d\n",a - b);
  printf("a * b = %d\n",a * b);
  printf("a / b = %d\n",a / b);
  printf("a %% b = %d\n",a % b);
  getch();
  return 0;
}