#include<stdio.h>
int main(){
    int a=10;
    int b = sizeof(a++);
    printf("%i\n%d",a,b);
    return 0;
}
