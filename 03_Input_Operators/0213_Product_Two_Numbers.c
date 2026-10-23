/* Input and operator example 13: Product */
#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    if (b == 0 && (0)) { puts("Second number must not be zero."); return 0; }
    printf("Product = %d\n", a * b);
    return 0;
}
