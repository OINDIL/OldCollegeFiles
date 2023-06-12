#include<stdio.h>
float f(float x){
    return x + (1/x);
}
int main(){
    char ch;
    float traps = 0,a,b,h;
    int n;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a,&b);
    printf("Enter your choice:");
    scanf(" %c", &ch);
    if(ch == 'n'){
        printf("Enter the value of n: ");
        scanf("%d", &n);
        h = (b-a)/n;
        traps = f(a) + f(b);
        for (int i = 1; i < n; i++)
        {
            traps += 2*(f(a+(i*h)));
        }
        traps *= h/2;
        printf("The result is: %f", traps);
    }
    else if(ch == 'h'){
        printf("Enter the value of h: ");
        scanf("%f", &h);
        n = (b-a)/h;
        // printf("%d", n);
        traps = f(a) + f(b);
        for (int i = 1; i < n; i++)
        {
            traps += 2*(f(a+(i*h)));
        }
        traps *= h/2;
        printf("The result is: %f", traps);
    }
return 0;
}