#include <stdio.h>
#include <stdlib.h>
float f(float x)
{
    return 1 / (1 + (x * x));
}
int main()
{
    int n, m;
    char choice;
    float a, b, h, weddle = 0;
    printf("Enter values of a and b: ");
    scanf("%f %f", &a, &b);
    printf("Enter your choice:[n or h]:");
    scanf(" %c", &choice);
    if (choice == 'n')
    {
        printf("Enter the value of n:");
        scanf("%d", &n);
        h = (b - a) / n;
        m = n / 6;
        if (n % 6 != 0)
        {
            printf("!!!Enter multiple of 6!!!");
            exit(0);
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                weddle += (f(a) + 5 * f(a + h) + f(a + (2 * h)) + 6 * (f(a + (3 * h))) + f(a + (4 * h)) + 5 * (f(a + (5 * h))) + f(a + (6 * h)));
                a += h * 6;
            }
            weddle *= (3 * h) / 10;
            printf("Evaluation: %.4f\n", weddle);
        }
    }
    return 0;
}