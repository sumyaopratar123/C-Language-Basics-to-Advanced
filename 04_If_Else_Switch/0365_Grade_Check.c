/* Conditional example 65: Grade_Check */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Grade: %s\n", n >= 90 ? "A" : n >= 75 ? "B" : n >= 60 ? "C" : n >= 40 ? "D" : "F");
    return 0;
}
