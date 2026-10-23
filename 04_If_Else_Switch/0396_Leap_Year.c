/* Conditional example 96: Leap_Year */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("%s\n", ((n%4==0 && n%100!=0)||n%400==0) ? "Leap year" : "Not leap year");
    return 0;
}
