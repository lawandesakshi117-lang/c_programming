/*
    Display
    INPUT : 5
    OUTPUT : A B C D E
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    char ch ;
    int iCnt = 0;

    for(iCnt = 1 , ch = 'A'; iCnt <= iNo ; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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