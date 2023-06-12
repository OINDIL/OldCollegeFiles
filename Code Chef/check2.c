#include<stdio.h>
#include<math.h>
int main(){
    int maxt = 2,sumn = 200,maxn = 100,i = 0;
    int sum = 0;
    do{
        sum += pow(maxn,2);
        i++;
    }while(i!=maxt);
    printf("%d\n", sum);
return 0;
}