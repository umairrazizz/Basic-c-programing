#include<stdio.h>
int main()
{
  int n,i,fac = 1;
  printf("Enter n: ");
  scanf("%d",&n);
  if (n > 0)
  {
    for(i=1; i<=n; i++)
    {
        fac = fac * i;
    }
    printf("factorial of %d is %d\n",n,fac);
  }
  else if (n == 0)
  {
    printf("Factorial of 0 is 1\n");
  }  
  else
  {
    printf("Factorial of negative doesn't exist./n ");
  }
}