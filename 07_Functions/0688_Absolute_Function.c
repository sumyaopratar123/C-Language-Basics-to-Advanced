/* Function example 78: Absolute_Function */
#include <stdio.h>
int absolute(int x){return x<0?-x:x;}
int main(void) {
    int n;
    printf("Enter integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    printf("Absolute = %d\n",absolute(n));
    return 0;
}
