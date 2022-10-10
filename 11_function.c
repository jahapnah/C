#include <stdio.h>
void display(); // function prototype

int main()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    display(); // function call
    printf("Function is finished\n");

    return 0;
}

// function call
void display()
{
    printf("This is a function call statement\n");
}




// Function to call good morning texts 
#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}

void goodMorning()
{
    printf("Good morning Rishi\n");
}

void goodAfternoon()
{
    printf("Good Afternoon Rishi\n");
}

void goodNight()
{
    printf("Good Night Rishi\n");
}