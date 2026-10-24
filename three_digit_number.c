#include<stdio.h>
int main()
{
  int n;
  printf("Entetr A Number : ");
  scanf("%d",&n);
  if(n>99 && n<1000){
    printf("It Is A Three Digit Number");
  }
  else{
    printf("It Is Not Three Digit Number");
  }
  return 0;
}