#include <stdio.h>
int main(void)
{
    int yard, miles;
    double kilometers;
    printf("Enter miles + yards:");
    scanf("%d", &miles + yard);
    kilometers = 1.69 * (miles + yard / 1760.0);
    printf("\nA %d miles + yards is %lf kilometers.\n\n", miles + yard, kilometers);
    return 0;
}