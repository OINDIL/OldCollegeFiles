#include<stdio.h>
float f(float x){
    return 1/(1+(x*x));
}
int main(){
    char ch;
    float a,b,h,threeEight = 0;
    int n;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a,&b);
    printf("Enter your choice: ");
    scanf(" %c", &ch);
    if(ch == 'n'){
        printf("Enter the value of h: ");
        scanf("%f", &h);
        n = (b-a)/h;
        threeEight = f(a) + f(b);
        for (int i = 1; i < n; i++)
        {
            if(i%3==0) threeEight += 2*(f(a+(i*h)));
            else threeEight += 3*(f(a+(i*h)));
        }
        threeEight *= (3*h)/8;
        printf("The result of: %f", threeEight);
    }   
return 0;
}