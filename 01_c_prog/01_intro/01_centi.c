#include<stdio.h>
int main()
{


    int c;
    float m,k;
    printf("Enter the length in centimeter.");
    scanf("%d",&c);
    m=0.01*c;
    k=0.00001*c;
    printf("The length in meter is %.2f m ,and in kilometer is %f km",m,k);

}