#include<stdio.h>
int main(){
    int days,year,week,d;
    printf("Enter the number of days.\n");
    scanf("%d",&days);
    year= days/365;
    week=(days-(year*365 ))/7;
    d=days-((year*365)+(week*7));
    printf("years= %d\n",year);
    printf("week= %d\n",week);
    printf("days= %d",d);


return 0;
} 