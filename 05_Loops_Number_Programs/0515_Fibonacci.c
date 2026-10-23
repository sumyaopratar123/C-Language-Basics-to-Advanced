/* Loop example 115: Fibonacci */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    long long a=0,b=1;for(int i=0;i<n;i++){printf("%lld ",a);long long t=a+b;a=b;b=t;} puts("");
    return 0;
}
