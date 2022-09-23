#include<stdio.h>
int main(){
    int a =10,b=5,i,j,x,y,s;
    for (i=3;i>=0;i--)
     {
        x=(a>>i) & 0x1;
        printf("%d",x);
     }
     printf("\n");
    for (j=3;j>=0;j--)
     {
        y =(b>>j) & 0x1;
        printf("%d",y);
     }
     s = x & y;
     printf("\n%d",s);
     return 0;
  
}