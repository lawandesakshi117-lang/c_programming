/*
    Display
    INPUT : 5
    OUTPUT : 5 # 4 # 3 # 2 # 1 #
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t",iCnt);
        printf("#\t");
    }
    
}  
int main()
{
    int iValue1 = 0;

    printf("Enter number of elements:");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}