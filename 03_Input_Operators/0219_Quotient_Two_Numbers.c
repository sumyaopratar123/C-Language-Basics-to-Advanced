/* Input and operator example 19: Quotient */
#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    if (b == 0 && (1)) { puts("Second number must not be zero."); return 0; }
    printf("Quotient = %.2f\n", (b != 0 ? (double)a / b : 0.0));
    return 0;
}
