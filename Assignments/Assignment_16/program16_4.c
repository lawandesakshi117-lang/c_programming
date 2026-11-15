#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i;
    int j;

    for(i = iRow ; i >= 1 ; i--)
    {
        for(j = iCol ; j >= 1; j--)
        {
            printf("%d\t",i);
        }
         printf("\n\n");
    }
   
    i++;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}