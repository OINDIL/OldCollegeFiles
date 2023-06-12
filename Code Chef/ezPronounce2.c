#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, flag = 0;
        scanf("%d", &n);
        char str[n];
        scanf("%s", &str);
        for (int i = 0; i < n; i++)
        {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
            {
                flag++;
                // break;
            }
            else
            {
                if (flag >= 4)
                {
                    printf("NO\n");
                }
                else
                {
                    flag = 0;
                }
            }
        }
        // printf("%d\n", flag);
        if (flag < 4)
            printf("YES\n");
    }
    return 0;
}