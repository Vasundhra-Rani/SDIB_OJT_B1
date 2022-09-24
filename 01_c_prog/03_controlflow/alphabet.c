#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character.");
    scanf("%c",&a);
    if(((a>=97) && (a<=122))||((a>=65)&&(a<=90)))
    {
      printf("The Character is an Alphabet");
    }
    else{
        printf("The Character is not an Alphabet");
    }


}