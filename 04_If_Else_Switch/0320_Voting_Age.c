/* Conditional example 20: Voting_Age */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("%s\n", n >= 18 ? "Eligible" : "Not eligible");
    return 0;
}
