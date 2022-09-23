#include<stdio.h>
int main(){
    int a,x;
    printf("Enter the number.");
    scanf("%d",&a);
    for(int i=7;i>=0;i--)
    {
        x=(a>>i) & 0x1;
        printf("%d",x);
    }
    return 0;

}