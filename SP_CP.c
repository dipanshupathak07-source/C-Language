#include<stdio.h>
int main ()
{
  int cp;
  printf("Enter Cost price : ");
  scanf("%d",&cp);
  int sp;
  printf("Enter Selliing Price : ");
  scanf("%d",&sp);
  if(sp>cp){
    printf("Profit");
  }
  else{
    printf("Loss");
  }
  if(sp==cp){
    printf("No Profit No Loss");
  }
  return 0;
}