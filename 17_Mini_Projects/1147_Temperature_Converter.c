/* Mini program 7: Temperature_Converter */
#include <stdio.h>
int main(void) {
    double c;printf("Celsius: ");if(scanf("%lf",&c)!=1)return 1;printf("Fahrenheit = %.2f\n",c*9.0/5.0+32);
    return 0;
}
