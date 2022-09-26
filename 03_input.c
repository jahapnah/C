#include<stdio.h>

int main() {
    printf("Hello world");
    return 0;
}


// PROGRAM TO FIND AREA OF A RECTANGLE

int main() {
    int l,b,a;

    printf("Enter the value of length : \n");
    scanf("%d", &l);
    printf("Enter the value of breadth : \n");
    scanf("%d", &b);

    a = l*b;
    printf("Area of the retangle is %d", a );
    return 0;
}


//PROGRAM TO FIND AREA OF A TRIANGLE VIA INPUT METHOD

int main() {
    int radius = 3;
    float pi = 22/7;

    printf("The area of circle is %f", pi*radius*radius);
    return 0;
}


// PROGRAM TO ADD TWO NUMBERS

int main() {
  int a, b, c = 0;
    printf("Enter your 1st number : \n");
    scanf("%d", &a);

    printf("Enter your 2nd number : \n");
    scanf("%d", &b);

    c = a + b;
    printf("sum of two numbers is %d", c);  
    return 0;
}

// PROGRAM TO FIND AREA OF A CIRCLE

int main() {
    int radius;
    float pi = 3.14;
    printf("Enter the value of radius :\n");
    scanf("%d", &radius);

    printf("The area of circle is %f", pi*radius*radius);
    return 0;
}


