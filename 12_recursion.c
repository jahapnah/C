// Make a program of factorial of a given number using recursion
#include<stdio.h>
int factorial(int y);

int main() {
    int in;
    printf("Enter the number for factorial\n");
    scanf("%d", &in);

    printf("The value of factorial of %d is %d", in, factorial(in));
    return 0;
}

int factorial(int y){
    if (y ==1 || y == 0){
        return 1;
    }
    else{
        return (factorial(y-1))*y;
    }
}



//Make a fibonacci series using recursion

#include <stdio.h>
#include <conio.h>

int fibonacci(int x);

int main()
{
    int in;
    printf("Enter the value for fibonacci :\n");
    scanf("%d", &in);


    for (int i = 0; i < in; i++)
    {
        printf("%d \n", fibonacci(i));
    }
    return 0;
}

int fibonacci(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }

    else
    {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}





