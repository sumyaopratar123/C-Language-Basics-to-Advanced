/* Function example 32: Recursive_Factorial */
#include <stdio.h>
unsigned long long fact_rec(int x){if(x<=1)return 1;return (unsigned long long)x*fact_rec(x-1);}
int main(void) {
    int n;
    printf("Enter integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    if(n>20){puts("Use n <= 20");return 0;}printf("Factorial = %llu\n",fact_rec(n));
    return 0;
}
