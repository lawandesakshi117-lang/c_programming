/*
    Display
    INPUT : 8
    OUTPUT :2 4 6 8 10 12 14 16 
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt*2);
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