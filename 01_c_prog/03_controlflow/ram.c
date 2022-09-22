#include<stdio.h>
int main()
{
    int r,s,a;
    printf("Enter the age of ram .");
    scanf("%d",&r);
    printf("Enter the age of Shyam. ");
    scanf("%d",&s);
    printf("Enter the name of Ajay.");
     scanf("%d",&a);
    if (r<a & r<s)
    {
        printf("Ram is youngest");
    }
    else if (s<a && s<r)
    {
        printf("Shyam is youngest");
    }
    else{
        printf("Ajay is the youngest");
    }
}