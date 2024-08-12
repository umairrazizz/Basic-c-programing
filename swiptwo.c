#include<stdio.h>
void swip(int x,int y)
{
  int temp;
  temp =x;
  x=y;
  y=temp;
  printf("After are : %d and %d",x,y);
}
int main()
{
  int x,y;
  printf("Enter two numbers: ");
  scanf("%d %d",&x, &y);
  printf("Befor are : %d and %d\n",x,y);
  swip(x,y);
  return 0;
}