#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);

    if (age <= 70 && age >=18)
    {
        printf("You can drive ");
    }

    else
    {
        printf("You cannot drive ");
    }
    return 0;
}



//TERNARY OPERATOR

int main() 
{
int a ;
printf("Enter the number \n");
scanf("%d", &a);

(a<=70 && a > 5)? printf("You are eligible") : printf("You are not eligible");
}