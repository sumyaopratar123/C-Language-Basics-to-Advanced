/* Loop example 129: Prime_Check */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    int p=n>=2; for(int i=2;i<=n/i;i++)if(n%i==0)p=0; puts(p?"Prime":"Not prime");
    return 0;
}
