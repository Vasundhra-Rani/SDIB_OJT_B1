#include<stdio.h>
int main(){
   int s1,s2,s3;
   printf("Enter the sides of a triangle");
   scanf("%d%d%d\n",&s1,&s2,&s3);
   if(s1==s2 && s2==s3)
   {
    printf("The triangle is equilateral");
   }
   else if(s1==s2 || s1==s3 || s2==s3 )
   {
    printf("The triangle is isoceles");
   }
   else{
    printf("The triangle is scalene");
   }


  return 0;

}