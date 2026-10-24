#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter 1st Number : ");
  scanf("%d",&a);
  printf("Enter 2nd Number : ");
  scanf("%d",&b);
  printf("Enter 3rd Number : ");
  scanf("%d",&c);
  if(a>b){ //b is out of race.
     if(a>c)
     printf("%d is greatest",a);
     else // a<c
     printf("%d is gratest",c);
  }
  else{ // b > a -> a ab sabse bda to nahi hai.
    if(b>c)
  printf("%d is gratest",b);
else // c>b
printf("%d is gratest",c);
}
  return 0;
}