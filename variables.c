#include <stdio.h>

int main()
{
    int a = 4;
    // int b = 4.4; // This is not recommendable
    float b = 4.4;
    char c = 'r';
    int d = 465;
    int e = 35 + 31;

    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("The value of a + d  is %d \n", a + d);
    printf("The value of e is %d \n", e);

    return 0;
}

// PROGRAM - ADDITION OF TWO NUMBERS
int main()
{
    int A, B, C ;

    printf("Enter your two numbers: \n");

    scanf("%d%d", &A, &B);
    C = A + B;
    printf("A+B is %d", C);
    return 0;
}