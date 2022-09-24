#include<stdio.h>
int main(){
    int a ,b,c ;
    printf("Enter the  3 numbers.");
    scanf("%d %d %d",&a ,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is greatest among the three numbers.",a);
    }
    else if (b>c && b>a)
    {
        printf("%d is greatest among the three numbers.",b);
    }
    else {
        printf("%d is the greatest among the three numbers.",c);
    }
    return 0;
}