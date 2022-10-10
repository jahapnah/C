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