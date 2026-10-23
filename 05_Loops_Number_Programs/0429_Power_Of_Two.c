/* Loop example 29: Power_Of_Two */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    unsigned long long p=1;for(int i=0;i<n && i<63;i++)p*=2;printf("2^n = %llu\n",p);
    return 0;
}
