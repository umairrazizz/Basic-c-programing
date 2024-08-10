#include<stdio.h>
int main(void)
{
  int arr[100],n,i,f,is=0;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter the elements of array: ");
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to find: ");
  scanf("%d",&f);
  for(i=0;i<n;i++)
  {
    if(arr[i]==f)
    {
      printf("Found at index %d\n",i+1);
      is =1;
    }
  }
  if (!is)
  {
    printf("Not found\n");
  }
}