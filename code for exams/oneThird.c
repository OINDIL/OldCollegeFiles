#include<stdio.h>
float f(float x){
    return 1/(1+(x*x));
}
int main(){
    float a,b,h,onethird = 0;
    char ch;
    int n;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a,&b);
    printf("Enter your choice: (n or h): ");
    scanf(" %c", &ch);
    if(ch == 'h'){
        printf("Enter the value of n: ");
        scanf("%d",&n);
        h = (b-a)/n;
        onethird = f(a) + f(b);
        for (int i = 1; i < n; i++)
        {
            if(i%2==0) onethird += (2*(f(a+(i*h))));
            else onethird += (4*(f(a+(i*h))));
        }
        onethird *= (h/3);
        printf("The result is: %f", onethird);
    }
return 0;
}