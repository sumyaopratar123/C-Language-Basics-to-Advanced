/* Mini program 5: Menu_Driven */
#include <stdio.h>
int main(void) {
    int c;printf("1 Hello  2 Square of 5  3 Exit\nChoice: ");if(scanf("%d",&c)!=1)return 1;switch(c){case 1:puts("Hello!");break;case 2:puts("25");break;case 3:puts("Goodbye");break;default:puts("Invalid choice");}
    return 0;
}
