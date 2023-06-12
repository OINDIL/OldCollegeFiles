#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,a1,b1,a2,b2;
	    scanf("%d%d%d%d%d%d",&a,&b,&a1,&b1,&a2,&b2);
	    if((a==a1 || a==b1)&&(b==a1 || b==b1)) printf("1\n");
        else if((a==a2 || a==b2)&&(b==a2 || b==b2)) printf("2\n");
        else printf("0\n");
	}
	return 0;
}

