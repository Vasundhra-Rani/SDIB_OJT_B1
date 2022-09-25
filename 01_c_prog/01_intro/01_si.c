#include<stdio.h>
int main(){
    int p , r, t;
    float si;
    printf("Enter the principal");
    scanf("%d",&p);
    printf("Enter the Rate of interest");
    scanf("%d",&r);
    printf("Enter the Time.");
    scanf("%d",&t);
    si=(float)(p*r*t)/100;
    printf("The Simple Interest is %.2f ",si);

}
