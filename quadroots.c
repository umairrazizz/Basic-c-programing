#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c,d,root1,root2;
  printf("Enter cofficients a,b and c: ");
  scanf("%lf %lf %lf",&a ,&b ,&c);
  d = b*b - 4*a*c;
  if (d==0)
  {
    root1 = -b / (2*a);
    root2 = root1;
    printf("Roots are %lf,%lf\n",root1,root2);
  }
  else if (d>0)
  {
    root1= (-b + sqrt(d)) / (2*a);
    root2= (-b - sqrt(d)) / (2*a);
    printf("Roots are %lf,%lf\n",root1,root2);
  }
  else
  {
    printf("Roots doesnt exist\n");
  }
  return 0;
}