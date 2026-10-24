#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter The Cordinates : ");
  scanf("%d %d",&x,&y);
  if(x==0 && y==0)
  {
    printf("The Point Is Origin");
  }
  else if(x==0)
  {
    printf("Lise On Y-Axis");
  }
  else{
    printf("Lise On X-Axis");
  }
  return 0;
} 