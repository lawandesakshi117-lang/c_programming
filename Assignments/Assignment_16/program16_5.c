#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i;
    int j;
    int iDisplay= 1;

    for(i=1; i <=iRow ; i++)
    {
        for(j=1; j <= iCol; j++)
        {
            printf("%d\t",iDisplay);
            iDisplay++;
        }
        printf("\n\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row and column:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}