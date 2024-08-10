#include<stdio.h>
int main()
{
  int i,n,a=0,b=1,c;
  printf("Enter the number of terms: ");
  scanf("%d",&n);
  printf("%d %d",a,b);
  n = n-2;
  for (i=0;i<n;i++)
  {
    c = a+b;
    printf(" %d",c);
    a = b;
    b = c;
  }
printf("\n");  
return 0;
}