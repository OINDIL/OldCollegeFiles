#include<stdio.h>

int addition(int *ptr,int *ptr_2){
    return *ptr + *ptr_2;
}

int main(){
    int a = 2,b = 2;
    printf("%d\n", addition(&a,&b));
return 0;
}