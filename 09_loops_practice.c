#include <stdio.h>

//QUESTION WHILE LOOP

int main() {
    int i = 0;

    while(i<=20){
        if(i>=10){
        printf("%d \n", i);
        }
        i++;
    }
    return 0;
}

//QUESTION DO WHILE LOOP
int main()
{
    int i = 0;
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i + 1);
        i++;
    } while (i < n);

    return 0;
}

// QUESTION FOR LOOP

int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        printf("%d\n", a + 1);
    }
    return 0;
}

