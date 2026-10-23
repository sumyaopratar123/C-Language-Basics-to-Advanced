/* Conditional example 17: Last_Digit */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Last digit = %d\n", n % 10);
    return 0;
}
