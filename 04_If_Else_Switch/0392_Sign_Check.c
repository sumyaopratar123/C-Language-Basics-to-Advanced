/* Conditional example 92: Sign_Check */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("%s\n", n > 0 ? "Positive" : (n < 0 ? "Negative" : "Zero"));
    return 0;
}
