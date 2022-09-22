#include<stdio.h>
int main(){
    int a =10,b=2;
    printf("\n before the if statements \n a=%d\tb =%d\n",a,b);
    if(a>b)
    {
        int temp =a;
        a=b;
        b=temp;
    }
    printf("\nAfter the if statements \n a=%d\tb =%d\n",a,b);
}