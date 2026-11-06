#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
   int iCnt = 0;
   int iFactSum = 0;
   int iFactNonSum = 0;

   for(iCnt = 1; iCnt < iNo ; iCnt++)
   {
      if(iNo % iCnt ==0)
      {
        iFactSum = iFactSum + iCnt;
      }
      else{
        iFactNonSum = iFactNonSum + iCnt;
      }  
   }
    return(iFactSum-iFactNonSum);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}