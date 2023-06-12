#include<stdio.h>
float f(float x){
    return 1/(1+(x*x));
}
int main(){
    float a,b,h,weddle;
    char ch;
    int n;
    printf("Enter the value of a and b: ");
    scanf("%f %f", &a,&b);     
    printf("Enter your choice: (n or h):");
    scanf(" %c", &ch);
    if(ch == 'h'){
        printf("Enter the value of n: ");
        scanf("%d", &n);
        h = (b-a)/n;
        for (int i = 1; i < n/6; i++)
        {
            weddle = f(a) + 5*(f(a+h)) + f(a+(2*h)) + 6*(f(a+(3*h))) + f(a+(4*h)) + 5*(f(a+(5*h))) + f(a+(6*h));
            a += (h*6);
        }
        weddle *= (3*h)/10;
        printf("The result is: %f", weddle);
    }                                                                                                            
return 0;
}