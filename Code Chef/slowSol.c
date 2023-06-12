#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int maxn,maxt,sumn,i,sum = 0;
        scanf("%d%d%d", &maxt,&maxn,&sumn);
        for(i = 0;i < (sumn/maxn);i++){
            if(sumn%maxn==0 || sumn%maxn!=0){
                sum += pow(maxn,2);
            }
        }
        printf("%d %d\n",i,sum);
    }
    return 0;
}