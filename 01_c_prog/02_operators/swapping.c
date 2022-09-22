#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("The value of a and b is =%d,%d.\n",a,b);
    b-=a;
    a+=b;
    printf("The value of a and b after swapping is =%d,%d.",a,b);
}