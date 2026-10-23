/* Mini program 49: BMI_Calculator */
#include <stdio.h>
int main(void) {
    double kg,m;printf("Weight in kg and height in metres: ");if(scanf("%lf %lf",&kg,&m)!=2||m<=0)return 1;printf("BMI = %.2f\n",kg/(m*m));
    return 0;
}
