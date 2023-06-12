// Given dy/dx = x*x + y, y(0) = 1 Evaluate y(0.05) by Modified Euler's Method taking step length h = 0.01, correct upto 4 decimal places


#include<stdio.h>
#include<math.h>

float f(float x, float y){
    return (x*x) + y;
}
int main(){
    int n;
    float y1,x0,y0,xn,h,a,x1,y2;
    printf("Enter the initial value of x and y: ");
    scanf("%f %f", &x0,&y0);
    printf("Enter the value of x bound: ");
    scanf("%f", &xn);
    printf("Enter the value of h: ");
    scanf("%f", &h);
    printf("Enter the accuracy level: ");
    scanf("%f", &a);
    n = (xn - x0)/h;
    y1 = y0 + h * f(x0,y0);
    x1 = x0+h;
        for (int i = 0; i < n; i++)
        
        {
            
          y1 = y0 + (h/2) * (f(x0,y0) + f(x1,y1));
            
                do
                {
                    y2 = y1;
                    y1 = y0 + (h/2) * (f(x0,y0) + f(x1,y1));
                } while (fabs(y2 - y1) > a);
                y0 = y1;
                x0 = x1;
                x1 += h;
        }
    printf("The answer\ny = %0.4f", y2);
return 0;
}       
