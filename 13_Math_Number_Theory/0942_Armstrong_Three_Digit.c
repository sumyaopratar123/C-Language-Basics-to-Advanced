/* Math example 2: Armstrong_Three_Digit */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    int x=n,s=0;while(x){int d=x%10;s+=d*d*d;x/=10;}puts(s==n?"Armstrong by 3-digit rule":"Not Armstrong");
    return 0;
}
