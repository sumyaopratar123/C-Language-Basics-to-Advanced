/* Loop example 21: Sum_Digits */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    int x=n,s=0; while(x){s+=x%10;x/=10;} printf("Digit sum = %d\n",s);
    return 0;
}
