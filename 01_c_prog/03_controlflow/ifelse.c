#include<stdio.h>
int main(){
    int a =10;
    if(a>9)
    {
        a++;
        printf("Value of a is = %d",a);
    }
    else{
        --a;
        printf("%d",a);
    }
}