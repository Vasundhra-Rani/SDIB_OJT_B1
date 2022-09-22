#include<stdio.h>
#include <math.h>
int main(){
    int r,a,b ;
    float area,area1;
    printf("Enter the side of a length and breadth of a rectangle.");
    scanf("%d %d",&a,&b);
    area1= a*b;
    printf("Area of Rectangle %.2f\n",area1);
    printf("Enter the radius of th circle.");
    scanf("%d",&r);
    area= r*r*3.14;
    printf("The area of the circle is %.2f",area);
}