#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (x * x * x - 2 * x - 5);
}
float f1(float x)
{
    return (3 * x * x - 2);
}
int main()
{
    float a, b, c, e;
    int k = 0;
    printf("Enter the accuracy: ");
    scanf("%f", &e);
    do
    {
        printf("Enter the values of A and B: ");
        scanf("%f %f", &a, &b);
    } while (f(a) * f(b) > 0.0);
    c = (a + b) / 2;
    printf("\nC = %f", c);
    do
    {
        c = c - (f(c) / f1(c));
        printf("\nC = %f\t", c);
        k++;
    } while (fabs(f(c) >= e));
    printf("\nThe root is: %f\nNo of iterations: %d\n", c, k);
    return 0;
}