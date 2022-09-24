#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three angle of a triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    int sum = a+b+c;
    if(sum==180)
    {
        printf("The triangle is valid.");
    }
    else {
        printf("The triangle is not valid.");
    }
}