#include <stdio.h>
#include <string.h>

int main() {
    char N[100];
    scanf("%s", N);

    int len = strlen(N);

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            for (int k = j + 1; k < len; k++) {
                int num = (N[i] - '0') * 100 + (N[j] - '0') * 10 + (N[k] - '0');
                if (num % 8 == 0) {
                    printf("YES\n%d\n", num);
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            int num = (N[i] - '0') * 10 + (N[j] - '0');
            if (num % 8 == 0) {
                printf("YES\n%d\n", num);
                return 0;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        int num = (N[i] - '0');
        if (num % 8 == 0) {
            printf("YES\n%d\n", num);
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}
