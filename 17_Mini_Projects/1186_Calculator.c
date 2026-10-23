/* Mini program 46: Calculator */
#include <stdio.h>
int main(void) {
    double a,b;char op;printf("Example input: 4 + 2\nEnter: ");if(scanf("%lf %c %lf",&a,&op,&b)!=3)return 1;switch(op){case '+':printf("%.2f\n",a+b);break;case '-':printf("%.2f\n",a-b);break;case '*':printf("%.2f\n",a*b);break;case '/':if(b)printf("%.2f\n",a/b);else puts("Division by zero");break;default:puts("Invalid operator");}
    return 0;
}
