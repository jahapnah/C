#include <stdio.h>
#include <math.h>


int main()
{
    int a = 3, b = 4;

    printf("The value of a + b is %d \n ", a + b);
    printf("The value of a - b is %d \n ", a - b);
    printf("The value of a * b is %d \n ", a * b);
    printf("The value of a / b is %d \n ", a / b);

    int z;
    z = a * b;  // legal
    // a * b = z;   illegal

    printf("The value of z is %d \n ", z);

    //modular operator
    printf("4 divided by 3 in modular operator gives %d \n", 4%3);
    printf("-4 divided by 3 in modular operator gives %d \n", -4%3);
    printf("4 divided by -3 in modular operator gives %d \n", 4%-3);

    //No operator is assumed to be present
    // printf("The value of 4*5 is %d \n", 4.5);  This wil be wrong
    // printf("The value of 4*5 is %d \n", (4)(5));  This will be wrong
    printf("The value of 4*5 is %d \n", (4)*(5)); // This will be wrong


//There is no operator to run exponeniation
printf("4 to the power 5 gives %f\n", pow(4,5));



    return 0;
}