#include <stdio.h>
#include<string.h>
#include<stdbool.h>
int main(void) {
	// your code goes here
	int n,t,s;
	char str[10][10];
	
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    for(int i = 0;i <= n;i++){
	        gets(str[i]);
	    }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n - i; j++)
            {
                s = strcmp(str[j],str[j+1]);
            }
        }
    printf("\n%d", s);
	}
	return 0;
}

