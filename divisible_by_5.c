#include<stdio.h>
int main ()
{
  int n;
  printf("Enter The Number : ");
  scanf("%d",&n);
  if(n%5==0){
    printf("Yes Divisible By 5");
  }
  else{
    printf("Not Dividible By 5");
  }
  return 0;
}