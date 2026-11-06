#include<stdio.h>
#include<stdlib.h>

void SumNonFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
     printf("%d",iSum);
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    SumNonFactor(iValue);

    return EXIT_SUCCESS;
}