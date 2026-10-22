#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear<=0)
    {
        printf("Year is invalid");
    }
    else if(((iYear%400)==0) ||((iYear%4)==0) && (iYear%100)!=0)
    {
        printf("Year is Leap");
    }
    else
    {
        printf("Year is not Leap");
    }
}
int main()
{
    int iYear = 0;
    printf("Enter year:");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}