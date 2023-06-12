#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x){
    return exp(x);
}
int main(){
    float three_ei = 0,h,a,b;
    char choice;
    int n;
    printf("Enter the values of a & b: ");
    scanf("%f %f",&a,&b);
    printf("Enter your choice, whether [h or n]: ");
    scanf(" %c", &choice);
    if(choice == 'n'){
        printf("Enter the value of n [must be multiple of 3]: ");
        scanf("%d", &n);
        if(n%3!=0){
             printf("!!!! Error, Enter multiple of 3 !!!!"); 
             exit(0);
        }
        else{
            h = (b-a)/n;
            three_ei = f(a) + f(b);
            for (int i = 1; i < n; i++)
            {
                if(i%3!=0) three_ei += 3*(f(a + (i*h)));
                else if(i%3==0) three_ei += 2*(f(a + (i*h)));
            }
            three_ei *= (3*h)/8;
        }
        printf("Evaluation: %.5f", three_ei);
    }
    else{
        printf("Enter the value of h: ");
        scanf("%f", &h);
        n = (b-a)/h;
            three_ei = f(a) + f(b);
            for (int i = 1; i < n; i++)
            {
                if(i%3!=0) three_ei += 3*(f(a + (i*h)));
                else if(i%3==0) three_ei += 2*(f(a + (i*h)));
            }
            three_ei *= (3*h)/8;
        printf("Evaluation: %.5f", three_ei);
        }
}