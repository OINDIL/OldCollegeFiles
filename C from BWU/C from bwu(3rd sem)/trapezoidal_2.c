#include <stdio.h>
float f(float x)
{
    return x + (1 / x);
}
float loop(char x, float n, int a, int b)
{
    float h, traps = 0;
    if (x == 'n')
    {
        h = (b - a) / (int)n;
        traps = f(a) + f(b);
        for (int i = 0; i < n; i++)
        {
            traps += 2 * (f(a) + f(i * h));
        }
        return traps *= (h / 2);
    }
    else if (x == 'h')
    {
        n = (b - a) / h;
        traps = f(a) + f(b);
        for (int i = 0; i < n; i++)
        {
            traps += 2 * (f(a) + f(i * h));
        }
        return traps *= (h / 2);
    }
}

int main()
{
    float traps = 0, n, h;
    int a, b;
    char choice;
    printf("Enter your choice[n/h]: ");
    scanf(" %c", &choice);
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    if (choice == 'n')
    {
        printf("Enter the value of n: ");
        scanf("%f", &n);
        printf("Evaluation: %f", loop(choice, n, a, b));
    }
    if (choice == 'h')
    {
        printf("Enter the value of h: ");
        scanf("%f", &h);
        printf("Evaluation: %f", loop(choice, h, a, b));
    }
}