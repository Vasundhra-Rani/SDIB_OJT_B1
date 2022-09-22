#include<stdio.h>
int main(){
    int cho,a,b;
    printf("Enter your numbers.");
    scanf("%d%d",&a,&b);
    printf("Operations are -\n");
    printf(" 1- Addition\n");
    printf("2-Subtraction\n");
    printf("3-Multiplication\n");
    printf("4-Division\n");
    printf("Enter your desired choice\n");
    scanf("%d",&cho);
 
   switch(cho)
   {
      case 1:
       printf("Additon of the two number is : %d",a+b);
       break;

    case 2:
       if(a>b){
        printf("Subtraction of two number is = %d",a-b);
        }
        else {
            printf("Subtraction of two number is =%d",b-a);
        }
        break;

    case 3:
    printf("Multiplication of two number is =%d",a*b);
    break;

    case 4:
    printf("Division of two number is =%d",a/b);
    break;
    
    
    default:
    printf("Invalid Option\n");
   }
}