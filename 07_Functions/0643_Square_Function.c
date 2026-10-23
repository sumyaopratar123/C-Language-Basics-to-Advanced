/* Function example 33: Square_Function */
#include <stdio.h>
int square(int x){return x*x;}
int main(void) {
    int n;
    printf("Enter integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    printf("Square = %d\n",square(n));
    return 0;
}
