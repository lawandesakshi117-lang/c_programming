#include <stdio.h>

int FactorialDiff(int iNo)
{
  int iEven = 0;
  int iOdd = 0;
  int iCnt = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1, iEven = 1, iOdd = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 == 0)
    {
      iEven = iEven * iCnt;
    }
    else
    {
      iOdd = iOdd * iCnt;
    }
  }

  return iEven - iOdd;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number : \n");
  scanf("%d", &iValue);

  iRet = FactorialDiff(iValue);

  printf("Factorial difference is : %d", iRet);

  return 0;
}