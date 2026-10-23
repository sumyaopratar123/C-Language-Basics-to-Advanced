/* Conditional example 79: Multiple_Of_3 */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("%s\n", n % 3 == 0 ? "Multiple of 3" : "Not multiple of 3");
    return 0;
}
