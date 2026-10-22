#include<stdio.h>
#define PI 3.14
int main()
{
 double radius, area;
 printf("Enter The Radius Of The Ciecle : ");
 if(scanf("%f",&radius) !=1 || radius < 0);
 {
  printf("Invalid Input. Plese Enter A Non-negative Number.\n");
  return 1;
 }
 area = PI * radius * radius;
 printf("Area Of The Circle = %.2f\n",area);
 return 0;
}