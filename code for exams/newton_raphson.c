#include<stdio.h>
#include<math.h>
float f(float x){
    return (x*x*x) - 2*x -5;
}
float df(float x){
    return 3*(x*x) - 2;
}
int main(){
    float x,acc;
    printf("Enter the accuracy: ");
    scanf("%f", &acc); 
    printf("Enter the arbitary value:");
    scanf("%f", &x);
    do{
        x = x - (f(x) / df(x));

    }while(fabs(f(x)) > acc);
    printf("The result is: %f", x);
return 0;
}