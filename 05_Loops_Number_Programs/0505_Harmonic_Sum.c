/* Loop example 105: Harmonic_Sum */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    double s=0;for(int i=1;i<=n;i++)s+=1.0/i;printf("Harmonic sum = %.4f\n",s);
    return 0;
}
