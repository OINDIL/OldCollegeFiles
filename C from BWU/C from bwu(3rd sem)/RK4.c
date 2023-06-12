#include<stdio.h>

float f(float x,float y){
    return ((y*y)-(x*x))/((y*y)+(x*x));
}

float loop(float h,float x0,float y0,float xn){
    float k1,k2,k3,k4,k;
    int n = (xn - x0) / h;
    // printf("\n%d",n);
    for (int i = 0; i < n; i++)
    {
        k1 = h * f(x0,y0);
        k2 = h * f(x0 + (h/2),y0 + (k1/2));
        k3 = h * f(x0 + (h/2),y0 + (k2/2));
        k4 = h * f(x0+h,y0 + k3);
        k = (1.0/6.0)*(k1 + (2*k2) + (2*k3) + k4);
        y0 += k;
        x0 += h;
    }
    return y0;
}

int main(){
    float h, x0, y0, xn;
    printf("Enter the value of x0 and y0: ");
    scanf("%f %f", &x0,&y0);
    printf("Enter the value of xn: ");
    scanf("%f", &xn);
    printf("Enter the value of h: ");
    scanf("%f", &h);
    printf("The value of y(%0.1f) is %f", xn,loop(h,x0,y0,xn));
}