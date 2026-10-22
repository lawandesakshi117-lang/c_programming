#include<stdio.h>
#include<stdlib.h>

void CalculateBonous(float fSalary,int iYears)
{
    float fBonus = 0.0f;
    if((fSalary <= 0) || (iYears < 0))
    {
        printf("Invalid Input\n");
    }
    else if(iYears > 10)
    {
        fBonus = (fSalary * 15) / 100;
    }
    else if(iYears >= 5)
    {
        fBonus = (fSalary * 10) / 100;
    }
    else
    {
        fBonus = (fSalary * 5) / 100;
    }

    printf("Bonus = %.2f\n",fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYear= 0;

    printf("Enter salary and year of service:");
    scanf("%f %d",&fSalary,&iYear);
    
    CalculateBonous(fSalary,iYear);
    return EXIT_SUCCESS;
}