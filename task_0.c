#include <stdio.h>

int main()
{
    int number;    //c program that assigns a number that shows if it positive , zero or negative

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) 
{
    printf("The number is positive.\n");
}	
    else if (number == 0)
{
    printf("The number is zero.\n");
}	
    else
{
    printf("The number is negative.\n");
}

    return 0;
}
