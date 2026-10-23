/* Function example 51: Even_Function */
#include <stdio.h>
int is_even(int x){return x%2==0;}
int main(void) {
    int n;
    printf("Enter integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    puts(is_even(n)?"Even":"Odd");
    return 0;
}
