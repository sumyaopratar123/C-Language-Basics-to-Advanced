/* Math example 43: Palindrome_Number */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    int x=n,r=0;while(x){r=r*10+x%10;x/=10;}puts(r==n?"Palindrome":"Not palindrome");
    return 0;
}
