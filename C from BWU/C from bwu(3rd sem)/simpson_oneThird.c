#include<stdio.h>
float f(float x){
    return 2*(x*x*x) + 3*(x*x);
}
int main(){
    char choice;
    int n;
    float traps = 0,a,b,h;
    printf("Enter the value of a & b: ");
    scanf("%f %f", &a,&b);
    printf("Enter whether you want to give (h or n): ");
    scanf(" %c", &choice);
    if(choice == 'h'){
        printf("Enter the value of h: ");
        scanf("%f", &h);
        n = (b-a)/h;
        traps = f(a) + f(b);
        for(int i = 1;i < n;i++){
            if(i % 2 == 0) traps += 2 * f(a+(i*h));
            else traps += 4 * f(a+(i*h));
        }
        traps *= (h/3);
        printf("Evaluation: %.4f", traps);
    }
    else{
        printf("Enter the value of n: ");
        scanf("%d", &n);
        h = (b-a)/n;
        traps = f(a) + f(b);
        for(int i = 1;i < n;i++){
            if(i % 2 == 0) traps += 2 * f(a+(i*h));
            else traps += 4 * f(a+(i*h));
        }
        traps *= (h/3);
        printf("Evaluation: %.4f", traps);
    }
return 0;
}