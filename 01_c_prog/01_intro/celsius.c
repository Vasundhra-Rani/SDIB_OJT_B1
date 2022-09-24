#include<stdio.h>
int main(){
    int c,f;
    printf("Enter the temp in Celsius = ");
    scanf("%d",&c);
    f=((32+c)*9/5);
    printf("The temperature in farenhite is = %d",f);
return 0;
}