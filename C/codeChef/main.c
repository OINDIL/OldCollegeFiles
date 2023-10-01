#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t,n;
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    char s[n];
		char new_str[n];
	    scanf("%s", s);
		// printf("%d\n", strlen(s));
		// printf("N: %d", n);
	    for(int i = 0;i < strlen(s); i++){
	        if(s[i]=='0' && s[i+1]=='0') printf("A");
	        if(s[i]=='0' && s[i+1]=='1') printf("T");
	        if(s[i]=='1' && s[i+1]=='0') printf("G");
	        if(s[i]=='1' && s[i+1]=='1') printf("C");
			i++;
	    }
	}
	return 0;
}

