#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  switch(a)
  {
    case 1:
      printf("salaam\n");
      break;
    case 2:
      printf("aadab\n");
      break;
    case 3:
      printf("hello\n");
      break;
    default:
      printf("Invalide input\n");
      break;
  }
return 0;        
}