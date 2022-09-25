#include<stdio.h>
int main(){
     int r,d;
     float c,a;
    printf("Enter the radius of a circle.");
    scanf("%d",&r);
    c = 2*3.14*r;
    d=2*r;
    a=3.14*r*r;
    printf("The diameter of the a circle is %d ,the circumferance of the circle is %.2f and the area of circle is %.2f.",d,c,a);


}