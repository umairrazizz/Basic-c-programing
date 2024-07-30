#include<stdio.h>
int main()
{
  int i,a,n;
  for (n=2;n<=10;n++)
  {
    printf("\n");
  for (i=1;i<=10;i++)
  {
    a = n *i;
    printf("%d * %d = %d\n",n,i,a);
  }
  }
  return 0;
}
