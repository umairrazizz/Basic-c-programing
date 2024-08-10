#include<stdio.h>
int main(void)
{
  char a[100];
  int n=0,is=1,i=0;
  printf("Enter a string: ");
  scanf("%s",a);
  while(a[n]!='\0')
  {
    n++;
  }
  n--;
  for(i=0;i<=n;i++)
  {
    if(a[i]!=a[n-i])
    {
      is=0;
      break;
    }
  }
  if(is)
  {
    printf("String is a palindrome\n");
  }
  else
  {
    printf("String is not palindrome\n");
  }
  return 0;
}