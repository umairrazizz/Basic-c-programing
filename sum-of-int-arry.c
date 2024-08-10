#include<stdio.h>
int main(void)
{
  int arr[100],n,i,sum=0;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter the elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    sum += arr[i];
  }
  printf("Sum is %d\n",sum);
}