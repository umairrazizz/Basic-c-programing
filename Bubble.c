#include<stdio.h>
int main()
{
  int arr[100],n,i,j,tem;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter the elements of array: ");
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Before: ");
  for (i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  for (i=0;i<n;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if (arr[j]>arr[j+1])
      {
        tem=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=tem;
      }
    }
  }
  printf("After: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}