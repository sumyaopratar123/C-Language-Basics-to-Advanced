/* Matrix example 29: Matrix_Diagonal_Sum (3x3) */
#include <stdio.h>
int main(void) {
    puts("Enter 9 integers row by row:");
    int a[3][3],s=0;for(int i=0;i<3;i++)for(int j=0;j<3;j++){scanf("%d",&a[i][j]);if(i==j)s+=a[i][j];}printf("Diagonal sum=%d\n",s);
    return 0;
}
