/* Bitwise example 21 */
#include <stdio.h>
int main(void) {
    unsigned int a,b;
    printf("Enter two non-negative integers: ");
    if(scanf("%u %u",&a,&b)!=2)return 1;
    printf("Result = %u\n", a & b);
    return 0;
}
