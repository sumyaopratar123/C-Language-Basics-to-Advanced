/* Input and operator example 37: Difference */
#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    if (b == 0 && (0)) { puts("Second number must not be zero."); return 0; }
    printf("Difference = %d\n", a - b);
    return 0;
}
