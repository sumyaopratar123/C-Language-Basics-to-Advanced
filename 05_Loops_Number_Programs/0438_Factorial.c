/* Loop example 38: Factorial */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    if(n>20){puts("Use n <= 20");}else{unsigned long long f=1;for(int i=2;i<=n;i++)f*=i;printf("Factorial = %llu\n",f);}
    return 0;
}
