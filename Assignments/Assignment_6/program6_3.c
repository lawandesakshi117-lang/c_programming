#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount<0)
    {
        printf("Invalid input");
    }
    else if(fAmount<1000)
    {
        fDiscount =0;
    }
    else if(fAmount < 500)
    {
        fDiscount = (fAmount*10)/100;
    }
    else
    {
        fDiscount = (fAmount*20)/100;
    }
    fFinalAmount=fAmount-fDiscount;

    printf("Payable Amount = %.2f\n",fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount:");
    scanf("%f",&fAmount);
    
    CalculateDiscount(fAmount);
    return EXIT_SUCCESS;
}