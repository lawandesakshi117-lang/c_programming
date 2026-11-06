#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit ;
    if(iNo==0)
    {
        return 1;
    }
    while (iNo != 0)
    {
        iDigit = (iNo % 10);

        if(iDigit==0)
        {
            return 1;
        }
        iNo = iNo / 10;
    }
    return 0;
    
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number:");
    scanf("%d",&iValue);
    
    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return EXIT_SUCCESS;
}