/* Input and operator example 100: Remainder */
#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    if (b == 0 && (1)) { puts("Second number must not be zero."); return 0; }
    printf("Remainder = %d\n", (b != 0 ? a % b : 0));
    return 0;
}
