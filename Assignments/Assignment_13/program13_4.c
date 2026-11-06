#include<stdio.h>
#include<stdlib.h>

int MulDigits(int iNo)
{
    int iDigit= 0 ;
    int iCount = 0;
    int iMDigit = 1;
    
    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if(iDigit != 0)
        {
             iMDigit = iMDigit * iDigit;
             
        }
       
        iCount++;

        iNo = iNo / 10;
    }
    return iMDigit;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    
    iRet = MulDigits(iValue);
   
    printf("%d",iRet);

    return EXIT_SUCCESS;
}