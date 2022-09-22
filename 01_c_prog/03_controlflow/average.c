#include<stdio.h>
int main(){
    int m1,m2,m3;
    float avg;
    printf("Enter the marks of three Subjects\n");
    scanf("%d\t%d\t%d",&m1,&m2,&m3);
    avg=(float)(m1+m2+m3)/3;
    printf("The the average of threee subject is =%.2f\n",avg);
    if (m1>35 && m2>35 && m3>35){
       if (avg>=70)
    {
         printf("Distinction");
    }
    else if(avg>=60)
    {
        printf("First Class");
    }
    else if (avg>=50 )
    {
        printf("Second Class");
    }
    else
    {
        printf("Pass");
    }
    }
    else
    {
        printf("Fail");
    }
}