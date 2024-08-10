#include<stdio.h>
#include<math.h>
int main()
{
  int n,x=0,i;
  printf("Enter a number: ");
  scanf("%d",&n);
  if (n>1)
  {
    for (i=2; i<= n/2;i++)
    {
      if (n%i==0)
    {
      x=1;
      break;
    }
    }
  }
  else{
    printf("Enter positive number\n");
    return 0;
  }
  if(x==0)
  {
    printf("Number is prime\n");
  }
  else
  {
    printf("Number is not prime\n");
  }
  return 0;
  }