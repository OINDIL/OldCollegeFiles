#include <stdio.h>
float f(float x)
{
    return 2 * (x * x * x) + 3 * (x * x);
}
int main()
{
    int n;
    char choice;
    float traps, traps_ev = 0, traps_od = 0, a, b, h;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a, &b);
    printf("Enter your choice [h or n]: ");
    scanf(" %c", &choice);
    if (choice == 'h')
    {
        printf("Enter the value of h:");
        scanf("%f", &h);
        n = (b - a) / h;
        traps = f(a) + f(b);
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                traps += 2 * (f(a + (i * h)));
            }
            else if (i % 2 != 0)
            {
                traps += 4 * (f(a + (i * h)));
            }
        }
        traps *= (h / 3);
        printf("Evaluation: %.4f", traps);
    }
    else
    {
        printf("Enter the value of n:");
        scanf("%d", &n);
        n = (b - a) / h;
        traps = f(a) + f(b);
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                traps += 2 * (f(a + (i * h)));
            }
            else
            {
                traps += 4 * (f(a + (i * h)));
            }
        }
        traps *= (h / 3);
        printf("Evaluation: %.4f", traps);
    }
    return 0;
}