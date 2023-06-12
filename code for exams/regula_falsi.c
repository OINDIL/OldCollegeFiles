#include<stdio.h>
#include<math.h>
float f(float x){
    return (x*x*x) + (2*x) - 2;
}
int main(){
    float x,a,b,e;
    printf("Enter the accuracy: ");
    scanf("%f", &e);
    do{
        printf("Enter the values of a and b: ");
        scanf("%f %f", &a,&b);
    }while(f(a) * f(b) > 0); // (+ * -) = -
    do{
        x = b - (f(b)/(f(b) - f(a)))*(b-a);
        if(f(a) * f(x) > 0) a = x;
        else b = x;
    }while(fabs(f(x)) > e);
    printf("The result is: %f",x);
return 0;
}