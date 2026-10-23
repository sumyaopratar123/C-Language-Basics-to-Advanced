/* Loop example 123: Sum_1_to_N */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    long long s=0; for(int i=1;i<=n;i++) s+=i; printf("Sum = %lld\n",s);
    return 0;
}
