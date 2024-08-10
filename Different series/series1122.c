// This code displays series 1 2 2 3 3 3 upto n
#include<stdio.h>
int main()
{
  int i,n,j;
  printf("Enter number of terms: ");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    for (j=1;j<=i;j++)
    {
      printf(" %d",i);
    }
  }
  printf("\n");
  return 0;
}