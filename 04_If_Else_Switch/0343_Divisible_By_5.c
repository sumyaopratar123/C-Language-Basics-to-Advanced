/* Conditional example 43: Divisible_By_5 */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("%s\n", n % 5 == 0 ? "Divisible by 5" : "Not divisible by 5");
    return 0;
}
