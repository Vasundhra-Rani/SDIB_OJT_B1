#include<stdio.h>
int main()
{
    
    int a,p,q,r,s,t,u,v;
    p=sizeof(int);
    q=sizeof(char);
    r =sizeof(float);
    a=sizeof(double);
    s=sizeof(unsigned int);
    t=sizeof(signed);
    u=sizeof(short int);
    v=sizeof(long int);

    printf("Size of int is = %d\n",p);
    printf("Size of char is = %d\n",q);
    printf("Size of float is = %d\n",r);
    printf("Size of double is = %d\n",a);
    printf("Size of unsigned int is = %d\n",s);
    printf("Size of signed is = %d\n",t);
    printf("Size of short int  is = %d\n",u);
    printf("Size of long int is = %d\n",v);
}


// another method
/*printf("Size of int is =%d",sizeof(int));
printf("Size of float is =%d",sizeof(float));
printf("Size of double is = %d",sizeof(double));*/