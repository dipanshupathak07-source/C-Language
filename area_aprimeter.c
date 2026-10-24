#include <stdio.h>
int main()
{
  int l;
  printf("Enter Length : ");
  scanf("%d", &l);
  int b;
  printf("Enter Breadth : ");
  scanf("%d", &b);
  int a = l * b;
  int p = 2 * (l + b);
  if (a > p)
  {
  printf("Area Is Greater Then Perimeter");
  }
  else
  {
  printf("Area Is Not Greater Then Peri,eter");
  }
  return 0;
}