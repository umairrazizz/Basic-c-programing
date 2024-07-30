#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,x=0;
  printf("Enter n: ");
  scanf("%d",&n);
  for (i = 1; i <= n; i++)
  {
   x =pow(2,i);
   printf("%d ",x);
  }
  printf("\n");
}