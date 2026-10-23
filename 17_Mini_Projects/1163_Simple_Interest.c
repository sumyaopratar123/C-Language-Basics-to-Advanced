/* Mini program 23: Simple_Interest */
#include <stdio.h>
int main(void) {
    double p,r,t;printf("Principal rate time: ");if(scanf("%lf %lf %lf",&p,&r,&t)!=3)return 1;printf("Simple interest = %.2f\n",p*r*t/100);
    return 0;
}
