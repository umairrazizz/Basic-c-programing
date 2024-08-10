// Display contents of an integer array in reverse order
#include<stdio.h>
int main(void)
{
  int arr[100],n,i;
  printf("Enter the size of an array: ");
  scanf("%d",&n);
  printf("Enter the elements of an array: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  i--;
  for(i=i;i>=0;i--)
  {
    printf("%d\n",arr[i]);
  }



}