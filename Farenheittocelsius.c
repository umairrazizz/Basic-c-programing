#include <stdio.h>
int main(void)
{
    double farenheit = 0.0, celsius = 0.0;
    printf("Please enter farenheit:");
    scanf("%lf", &farenheit);
    celsius = (farenheit - 32) / 1.8;
    printf("\n %lf farenheit is %lf celsius.\n", farenheit, celsius);
    return 0;
}
