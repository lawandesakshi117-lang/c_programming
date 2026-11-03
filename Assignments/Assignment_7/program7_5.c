//Input : 4 
//Output : 4 8 12 16 20
#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= 5; iCnt++)
    {
            printf("%d\t" ,iNo*iCnt); 
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}