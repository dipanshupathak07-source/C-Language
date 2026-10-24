#include<stdio.h>
int main()
{
  int n;
  printf("Enter The Number : ");
  scanf("%d",&n);
  if(n%5==0 && n%3==0) //(n%5==0 || n%3==0) ye tab lagaya jata hai jab in dono mai se koi aek divisible ho jab iska '||' use kiya jata hai.
  {
    printf("Yes It Is Divisible By 5 And 3");
  }
  else{
    printf("It Is Not Divisible By 5 And 3");
  }
  return 0;
}