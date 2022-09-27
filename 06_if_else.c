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


/*Q. Write a program to calculate tax paid on income. 
income 250000 - 500000(tax = 5%)
income 500000 - 1000000 (tax = 20%)
income 1000000 and above(tax = 30%) 
*/
int main() {
    int income ;
    float five , twenty , thirty;
    printf("Enter salary \n");
    scanf("%d", &income);

five = (income-250000)/100*5;
twenty = (income-500000)/100*20;
thirty = (income-1000000)/100*30;

if(income<=500000 && income>=250000)
{
printf("Your deducted tax is %f", five);
}

else if(income<=1000000 && income>500000)
{
printf("Your deducted tax is %f", twenty);
}
else if(income>1000000){
    printf("Your deducted tax is %f", thirty);
}

else{
    printf("Invalid income");
}
    return 0;
}


//q. To check whether an year is a leap year or not

int main()
{
    int year;
    printf("Enter your year \n");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year", year);
    }

    else if (year % 100 == 0)
    {
        printf("%d is not a leap year", year);
    }

    else if (year % 4 == 0)
    {
        printf("%d is  a leap year", year);
    }

    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}
