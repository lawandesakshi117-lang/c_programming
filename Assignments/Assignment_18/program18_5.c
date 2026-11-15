/*
    Display
    1 2 3 4
    1 * * 4
    1 * * 4
    1 2 3 4    
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
             if(i == 1 || i == iRow || j == 1 || j == iCol)
              {
                printf("%d\t",j);
                if (i == 5)
                {
                    iCnt = 1;
                    iCnt++;
                }
              }
              else
              {
                  printf("*\t",i);
              }
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