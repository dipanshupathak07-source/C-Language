#include<stdio.h>
int main()
{
  float principal,rate,time,si;
  printf("Enter Your Principal : ");
  scanf("%f",&principal);
  printf("Enter Your Rate : ");
  scanf("%f",&rate);
  printf("Enter Your Time : ");
  scanf("%f",time);
  si = (principal*rate*time)/100;
  printf("Your Simple Intrese is : %f",si);
return 0;
}
