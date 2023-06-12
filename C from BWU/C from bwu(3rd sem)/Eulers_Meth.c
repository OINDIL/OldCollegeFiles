#include <stdio.h>
float f(int x, int y)
{
    return (x * x * x) + y;
}
float loop(float h, float x0, float y0, float xn)
{
    float yn;
    int n = (xn - x0) / h;
    for (int i = 0; i < n; i++)
    {
        yn = y0 + h * f(x0, y0);
        y0 = yn;
        x0 += h;
    }
    return yn;
}
void main()
{
    float y, x0, y0, xn, yn = 0, h;
    int n;
    printf("Enter the value of initial x and y: ");
    scanf("%f %f", &x0, &y0);
    printf("Enter the value of x boundary: ");
    scanf("%f", &xn);
    printf("Enter the value of h: ");
    scanf("%f", &h);
    printf("The answer\ny = %.2f", loop(h, x0, y0, xn));
}