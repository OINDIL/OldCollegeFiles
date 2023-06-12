#include<stdio.h>

int main(){
int test;
scanf("%d", &test);
while(test--)
{
    int n,x;
    scanf("%d %d", &n,&x);
    if(n==1) printf("%d", x);
    if(n%6==0) printf("%d", (n/6)*x);
    if(n/6 > 1)
}
return 0;
}