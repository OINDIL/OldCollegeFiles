#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char str[10][10];
    bool s;
    for(int i = 0;i < 4;i++){
        gets(str[i]);
    }
    s = strcmp(str[0],str[1]);
    printf("%d", s);
return 0;
}