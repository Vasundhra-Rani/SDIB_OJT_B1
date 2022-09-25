#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 2 angle of the triangle");
    scanf("%d %d",&a,&b);
    c= 180-(a+b);
    printf("The third angle is %d",c);
}