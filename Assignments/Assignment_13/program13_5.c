#include<stdio.h>
#include<stdlib.h>

int MulDigits(int iNo)
{
    int iDigit= 0 ;
    int iCount = 0;
    int iEsum = 0;
    int iOsum = 0;
    
    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if(iDigit % 2 == 0)
        {
             iEsum = iEsum + iDigit;    
        }
        else{
            iOsum = iOsum + iDigit;
        }
        iCount++;
        iNo = iNo / 10;
    }
    return (iEsum - iOsum);
    
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