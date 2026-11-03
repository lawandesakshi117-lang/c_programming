#include <stdio.h>

double RectArea(float fwidth, float fheight)
{
  double Area = 0.0;

  Area = fwidth * fheight;

  return Area;
}

int main()
{
  float fValue1 = 0.0f, fValue2 = 0.0f;
  double dRet = 0.0;

  printf("Enter width :");
  scanf("%f", &fValue1);

  printf("Enter heigth :");
  scanf("%f", &fValue2);

  dRet = RectArea(fValue1, fValue2);

  printf("Area of Rectangle : %lf", dRet);

  return 0;
}