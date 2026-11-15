/*
    Display

    2 4 6 8 10
    1 3 5 7 9
    2 4 6 8 10
    1 3 5 7 9
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int iDisplay = 1;
    int i = 0;
    int j = 0;

    for(i = 1; i<=iRow ; i++)
    {
        if(i % 2 == 0)
        {
            iDisplay = 1;
        }
        else
        {
            iDisplay = 2;
        }
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iDisplay);
            iDisplay= iDisplay + 2;

        }
        printf("\n\n");
    }
  
}
int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("Enter number of rows and columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}