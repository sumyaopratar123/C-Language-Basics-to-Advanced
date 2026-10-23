/* Conditional example 18: Tens_Digit */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Tens digit = %d\n", (n / 10) % 10);
    return 0;
}
