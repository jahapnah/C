//Multiplication table of given number
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
    return 0;
}



//Multiplication table of a number in reverse order
#include <stdio.h>

int main()
{
    int i;
    printf("Enter the number \n");
    scanf("%d", &i);

    for (int n = 10; n; n--)
    {
        printf("%d x %d = %d \n", i, n, i * n);
    }
    return 0;
}



// Sum of 1st ten natral number
#include<stdio.h>

int main() {
int sum = 0;

    for(int i = 0; i<=10; i++){
        sum+=i;
    }

    printf("%d", sum);
    return 0;
}



//Addition of multiplication table of a given number
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        sum += n * i;
    }

    printf("The addition value of given multiplication table is %d", sum);
    return 0;
}



//To check the greatest of 4 number
#include<stdio.h>

int main() {
    int i, j, k, l;
    printf("Enter your number \n");
    scanf("%d", &i);

    printf("Enter your number \n");
    scanf("%d", &j);

    printf("Enter your number \n");
    scanf("%d", &k);

    printf("Enter your number \n");
    scanf("%d", &l);

    if(i>j && i>k && i>l){
        printf("%d is the greatest",i);
    }

    else if(j>k && j>l && j>i){
        printf("%d is the greatest",j);
    }

    else if(k>l && k>j && k>i){
        printf("%d is the greatest",k);
}
    else if(l>i && l>j && l>k){
        printf("%d is the greatest",l);
    }
    return 0;
}


// To check whether a number is prime or not
#include <stdio.h>

int main()
{
    int i, prime = 1;
    printf("Enter a number\n");
    scanf("%d", &i);

    for (int n = 2; n*n <= i; n++)
    {
        if (i % n == 0)
        {
            prime = 0;
        }
    }
    if (prime == 0)
    {
        printf("The number %d is not a prime", i);
    }

    else
    {
        printf("The number %d is prime", i);
    }

    return 0;
}