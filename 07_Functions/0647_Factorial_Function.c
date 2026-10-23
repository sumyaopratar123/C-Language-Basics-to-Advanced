/* Function example 37: Factorial_Function */
#include <stdio.h>
unsigned long long fact(int x){unsigned long long r=1;for(int i=2;i<=x;i++)r*=i;return r;}
int main(void) {
    int n;
    printf("Enter integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    if(n>20){puts("Use n <= 20");return 0;}printf("Factorial = %llu\n",fact(n));
    return 0;
}
