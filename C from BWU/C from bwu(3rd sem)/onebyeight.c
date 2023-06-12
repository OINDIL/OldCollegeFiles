#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float f(float x)
{
    return exp(x);
}
int main()
{
    int n;
    char choice;
    float a, b, h, one_eight = 0;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a, &b);
    printf("Enter your choice: whether [h or n]: ");
    scanf(" %c", &choice);
    if (choice == 'n')
    {
        printf("Enter the value of n[input only multiple of 3]: ");
        scanf("%d", &n);
        if (n % 3 != 0)
        {
            printf("!!!!!Enter multiple of 3!!!!!");
            exit(0);
        }
        else
        {
            h = (b - a) / n;
            one_eight = f(a) + f(b);
            for (int i = 1; i < n; i++)
            {
                if (i % 3 != 0)
                    one_eight += 3 * f(a + (i * h));
                if (i % 3 == 0)
                    one_eight += 2 * f(a + (i * h));
            }
            one_eight *= (3 * h) / 8;
            printf("Evaluation: %.5f", one_eight);
        }
    }
    return 0;
}