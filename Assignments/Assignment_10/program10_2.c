#include <stdio.h>

double CircleArea(float fRadius)
{
  float PI = 3.14f;

  float Area = 0.0f;

  Area = PI * fRadius * fRadius;

  return Area;
}

int main()
{
  float fValue = 0.0f;
  double dRet = 0.0;

  printf("Enter radius : \n");
  scanf("%f", &fValue);

  dRet = CircleArea(fValue);

  printf("Area of Circle : %f", dRet);

  return 0;
}