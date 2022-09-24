#include<stdio.h>
int main(){
    int c,f;
    printf("Enter the temp in Fahrenheit = ");
    scanf("%d",&f);
    c=((f-32)*5)/9;
    printf("The temperature in Celsius is = %d",c);
return 0;
}