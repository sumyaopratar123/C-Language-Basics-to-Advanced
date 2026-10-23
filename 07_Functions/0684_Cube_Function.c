/* Function example 74: Cube_Function */
#include <stdio.h>
int cube(int x){return x*x*x;}
int main(void) {
    int n;
    printf("Enter integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    printf("Cube = %d\n",cube(n));
    return 0;
}
