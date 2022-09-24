#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the sides of triangle.\n");
    scanf("%d\n%d\n%d",&s1,&s2,&s3);
    if((s1+s2)>s3 && (s1+s3)>s2 && (s2+s3)>s1)
    {
        printf("The Triangle is valid.");
    }
    else{
        printf("The Triangle is not valid");
    }
}