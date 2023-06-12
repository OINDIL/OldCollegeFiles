#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10], y[10], n;
    float d, xx, u, h, p = 1;
    printf("Enter the value of f(x): ");
    scanf("%f", &xx);
    printf("Enter the size of array x & y: ");
    scanf("%d", &n);
    printf("Enter the values of x & y:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    d = y[n - 1];
    h = (x[1] - x[0]);
    u = (xx - x[n - 1]) / h;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            y[j] = y[j + 1] - y[j];
        }
        // if(y[i] == 0) break;
        p *= ((u + i) / (i + 1));
        d += (p * y[n - 1]);
        // printf("%f %f %d\n", d, p, y[0]);
    }
    printf("Value: %f", d);
    return 0;
}