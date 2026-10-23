/* Conditional example 84: Absolute_Value */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Absolute value = %d\n", n < 0 ? -n : n);
    return 0;
}
