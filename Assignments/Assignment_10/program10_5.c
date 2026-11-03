#include <stdio.h>

double SquareMeter(int iValue)
{
  float fSMeter = 0.0f;

  fSMeter = iValue * 0.0929;

  return fSMeter;
}

int main()
{
  int iValue = 0;
  double dRet = 0.0;

  printf("Enter area in square foot : ");
  scanf("%d", &iValue);

  dRet = SquareMeter(iValue);

  printf("Area in square meter : %lf", dRet);

  return 0;
}