/* Math example 66: GCD */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    int a=n,b=24;while(b){int t=a%b;a=b;b=t;}printf("GCD with 24 = %d\n",a);
    return 0;
}
