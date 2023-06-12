// one function for all the logical operations
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x){
    return exp(x);
}
float logic(float a,float b,float u){
    float three_ei;
    for (int i = 0; i < u; i++)
    {
        

    }
    
}
int main(){
    char choice;
    float a,b,h;
    int n;
    printf("Enter the values of a and b:");
    scanf("%f %f", &a,&b);
    printf("Enter your choice: [n or h]: ");
    scanf(" %c", &choice);
        if(choice == 'n'){
            printf("Enter the value of n: ");
            scanf("%d", &n);
                if(n%3!=0){
                    printf("!!Enter multiple of 3!!");
                    exit(0);
                }
                else{
                    h = (a-b)/n;
                }
        }
return 0;
}