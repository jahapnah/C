// Function to find average of three numbers
 #include <stdio.h>
 float average(int a, int b, int c);
 int main()
 {
     int a, b, c;
     printf("Enter your three numbers\n");
     scanf("%d", &a);

    printf("Enter your three numbers\n");
    scanf("%d", &b);

    printf("Enter your three numbers\n");
    scanf("%d", &c);

    printf("The average of %d, %d, %d is %f", a, b, c, average(a, b, c));
    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}

// Function to convert celcius to fahrenheit
 #include<stdio.h>
 float convert(int x);

int main() {
    int c;
    printf("Enter the celcius temprature to convert\n");
    scanf("%d", &c);

    printf("The conveted temprature of %d degree celcius to fahrenhiet is %f",c,convert(c) );
    return 0;
}
float convert(int x){
    float f;
    f = (float)(x*9)/5+32;
    return f;
}

// Function to find fibonacci series

#include<stdio.h>
int fibonacci(int x);
int main() {
    int in;
    printf("Enter the fibonacci term to be displayed :\n");
    scanf("%d", &in);

    for(int i = 0; i<in; i++){
        printf("%d\n", fibonacci(i));
    }
    return 0;
}


int fibonacci(int x){
    if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return (fibonacci(x-1) + fibonacci(x-2));
    }
}

// Function to calculate factorial

#include <stdio.h>
int factorial(int x);

int main()
{
    int in;
    printf("Enter your number for factorial\n");
    scanf("%d", &in);
    printf("factorial of %d is %d", in, factorial(in));

    return 0;
}

int factorial(int x)
{

    if (x == 1 || x == 0)
    {
        return 1;
    }

    else
    {
        return x * factorial(x - 1);
    }
}

// Fibonacci series

#include <stdio.h>
int fibonacci(int x);

int main()
{
    int in;
    printf("Enter your number for fibonacci\n");
    scanf("%d", &in);

    for (int i = 0; i < in; i++)
    {
        printf("%d\n", fibonacci(i));  // 0,1,1,2,3,5,8,13,21
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

// Recursive program to print the sum of 1st n natural numbers

#include <stdio.h>
int sum(int x);
int main()
{
    int in;
    printf("Enter the value :\n");
    scanf("%d", &in);

    printf("The value of 1st %d natural number is %d", in, sum(in));
    return 0;
}

int sum(int x)
{
    if (x!=0)
    {
        return sum(x - 1) + x;
    }
    else{ return 0;}
}
