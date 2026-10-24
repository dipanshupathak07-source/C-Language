#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter The Numbers : ");
  scanf("%d%d",&a,&b);
  printf("\nRelation Operators Result :\n");
  printf("%d == %d : %d\n",a,b,a==b);
  printf("%d!=%d : %d\n",a,b,a!=b);
  printf("%d>%d : %d\n",a,b,a>b);
  printf("%d<%d : %d\n",a,b,a<b);
  printf("%d>=%d : %d\n",a,b,a>=b);
  printf("%d<=%d : %d\n",a,b,a<=b);
  return 0;
}