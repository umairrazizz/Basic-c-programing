#include<stdio.h>
#include<math.h>
int main()
{
  int n,i;
  unsigned long ans = 2;
  printf("Enter number of terms: ");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
  printf("%lu ",ans);
  ans = ans*ans;
  if (ans==0)
  {
    printf("overflow stoping the series\n");
    break;
  }  
  }
return 0;
}