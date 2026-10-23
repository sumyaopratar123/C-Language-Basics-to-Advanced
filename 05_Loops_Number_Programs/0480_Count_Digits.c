/* Loop example 80: Count_Digits */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    int x=n,c=0; do {c++;x/=10;} while(x); printf("Digits = %d\n",c);
    return 0;
}
