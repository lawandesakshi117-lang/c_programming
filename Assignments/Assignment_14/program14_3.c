#include<stdio.h>
#include<stdlib.h>

void NonFactor(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
     
    printf("Enter number:");
    scanf("%d",&iValue);

    NonFactor(iValue);

    return EXIT_SUCCESS;
}