/* Loop example 22: Reverse_Number */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    int x=n,r=0; while(x){r=r*10+x%10;x/=10;} printf("Reverse = %d\n",r);
    return 0;
}
