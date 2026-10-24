#include<stdio.h>
int main ()
{
  int year;
  printf("Plese Enter Your Year : ");
  scanf("%d",&year);
  if(year%400==0){
    printf("This Is Leap Year");
  }
  else if(year%100==0){
    printf("This Is Not Leap Year");
  }
  else if(year%4==0){
    printf("Leap Year");
  }
  else{
    printf("Not A Leap Year");
  }
  return 0;
}