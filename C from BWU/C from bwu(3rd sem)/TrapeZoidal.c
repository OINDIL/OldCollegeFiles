#include <stdio.h>
float f(float x)
{
    return x + (1 / x);
}
int main()
{
    float traps = 0, a, b, h;
    int n;
    char choice;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a, &b);
    printf("Enter the choice [h or n] :");
    scanf(" %c", &choice);
    if (choice == 'n')
    {
        printf("Enter the value of intervals: ");
        scanf("%d", &n);
        h = (b - a) / n;
        traps = f(a) + f(b);
        for (int i = 1; i < n; i++)
        {
            traps += 2 * (f(a + (i * h)));
        }
        traps *= (h / 2);
        printf("Evaluation: %.4f", traps);
    }
    else
    {
        printf("Enter the value of h:");
        scanf("%f", &h);
        n = (b - a) / h;
        traps = f(a) + f(b);
        for (int i = 1; i < n; i++)
        {
            traps += 2 * (f(a + (i * h)));
        }
        traps *= (h / 2);
        printf("Evaluation: %.4f", traps);
    }
    return 0;
}