#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter Two Logical Values(0 for false, 1 for true) : ");
  scanf("%d%d",&x,&y);
  printf("xANDy = %d\n",x&&y);
  printf("xORy = %d\n",x||y);
  printf("NOTx = %d\n",!x);
  printf("Noty = %d\n",!y);
  return 0;
}