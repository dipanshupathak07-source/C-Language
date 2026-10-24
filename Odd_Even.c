#include<stdio.h>
int main ()
{
  int n;
  printf("Check The Number Even Or Odd");
  printf("\nPlese Enter A Number : ");
  scanf("%d",&n);
  if(n%2==0){
  printf("This Is Even Number");
  }
  else{
  printf("This Is Odd Number");
  }

  return 0;
}