#include<stdio.h>
int main(){
    int a =50;
    int b =5;
    int result =0;
    result=a&b;
    printf("Binary AND Operator of a anf b is %d\n",result);
    result =a^b;
    printf("Binary XOR Operation of a and b is %d\n",result );
     result =~b;
    printf("Binary Ones complement Operation of a and b is %d\n",result );
    result =a>>2;
    printf("Binary Right Shift Operator of a is %d\n",result);
    result =a<<2;
    printf("Binary Left Shift Operator of a is %d\n",result);
} 
 