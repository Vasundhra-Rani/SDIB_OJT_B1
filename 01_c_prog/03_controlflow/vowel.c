#include<stdio.h>
int main(){
    char v;
    printf("Enter the alphabet\n");
    scanf("%c",&v);
    if( v== 'a' || v=='e' ||v=='i' || v=='o' || v=='u')
    {
        printf("The alphabet is vowel");
    }
    else{
        printf("The alphabet is consonant");
    }
}