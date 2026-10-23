/* Loop example 131: Sum_Even */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    long long s=0;for(int i=2;i<=n;i+=2)s+=i;printf("Even sum = %lld\n",s);
    return 0;
}
