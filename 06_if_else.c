#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);

    if(age>18){
        printf("You are eligible to drive");
    }

    else{
        printf("You are not ready to drive");
    }

    return 0;
}


// Q, Make a prorgram to allocate grades to marks obtained by a student

int main() {
    int marks ;
    printf("Enter your marks \n");
    scanf("%d", &marks);

    if(marks<=100 && marks>=90)
    {
        printf("A");
    }
    else if(marks<=100 && marks>=90)
    {
        printf("A");
    }
    else if(marks<90 && marks>=80)
    {
        printf("B");
    }
    else if(marks<80 && marks>=70)
    {
        printf("C");
    }
    else if(marks<70 && marks>=60)
    {
        printf("D");
    }

    else{
        printf("F");
    }
    return 0;
}





//Q. Make a program to check whether a student is pass or fail in overall or in each subject 

int main() {
    int physics, chemistry, biology;
    double total;
    printf("Enter physics marks ");
    scanf("%d", &physics);

    printf("Enter chemistry marks ");
    scanf("%d", &chemistry);

    printf("Enter biology marks ");
    scanf("%d", &biology);

    total = (physics + chemistry + biology)/3;

if (total<40 || physics<33 || chemistry<33 || biology<33 ){
    printf("Your total percentage is %f and you are fail", total);
}

else{
    printf("You are pass");
}
    
    return 0;
}
