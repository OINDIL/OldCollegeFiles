#include<stdio.h>
float f(int x,int y){
    return (x*x*x)+y;
}
int main(){
    float x0,y0,xn,yn,h;
    int n;
    printf("Enter the intial value of x and y: ");
    scanf("%f %f", &x0,&y0);
    printf("Enter the value of x bound: ");
    scanf("%f", &xn);
    printf("Enter the value of h: ");
    scanf("%f", &h);
    n = (xn - x0)/h;
    for (int i = 0; i < n; i++)
    {
        yn = y0 + h*f(x0,y0);
        y0 = yn;
        x0 += h;
    }
    printf("The answer\ny = %.2f", yn);
return 0;
}