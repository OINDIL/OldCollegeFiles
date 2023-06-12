#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isPalindrome(int x)
{
    int rem, sum = 0,num = x;

    while (x > 0)
    {
        rem = x % 10;
        sum = (sum * 10) + rem;
        x /= 10;
    }
    printf("%d\n", num);
    if (num == sum)
        return true;
    else
        return false;
}
int main()
{
    printf("%d", isPalindrome(121));
}