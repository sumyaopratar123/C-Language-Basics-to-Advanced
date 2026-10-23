/* Conditional example 41: Even_or_Odd */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("%s\n", n % 2 == 0 ? "Even" : "Odd");
    return 0;
}
