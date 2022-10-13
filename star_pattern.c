/* Q. Print stars like this using iteration
 *
 **
 ***
 ****
 */
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*Q.Print stars like this using recursion
 *
 **
 ***
 ****
 */

#include <stdio.h>
int printPattern(int x);
int main()
{
int in;
printf("enter the value of number\n");
scanf("%d", &in);
printf(printPattern(in));
    return 0;
}

int printPattern(int x)
{
    if (x == 1)
    {
        printf("*\n");
    }
    else
    {
        printPattern(x - 1);
        for (int i = 0; i<x; i++){
            printf("*");
        }
        printf("\n");
    }
}


//Q. Print stars like this using iteration
//       *
//      **
//     *** 
//    **** 
//   *****

#include<stdio.h>

int main() {
    int in;
    printf("Enter the number of line you want to print\n");
    scanf("%d", &in);

    for(int i = 0; i<in; i++){
        for(int j = 0; j<in+1; j++){
            if(i+j>=in){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

//Q. Print stars like this using iteration
//  *
//  ***
//  *****
//  *******
int main() {
    int in;
    printf("Enter the number of line you want to print\n");
    scanf("%d", &in);

    for(int i = 0; i<in; i++){
        for(int j = 0; j<(2*i)+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
