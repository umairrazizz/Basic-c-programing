#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  switch(a)
  {
    case 1:
      printf("salaam");
      break;
    case 2:
      printf("aadab");
      break;
    case 3:
      printf("hello");
      break;
    default:
      printf("Invalide input");
      break;
  }
return 0;        
}
