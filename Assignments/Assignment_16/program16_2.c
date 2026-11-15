#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i;
    int j;

    for(i = 1; i <= iRow ; i++)
    {
        char ch;
        if(i%2 != 0)
        {
           ch = 'A';

        }
        else
        {
            ch = 'a';
        }
        for(j= 1 ; j <= iCol ; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
          printf("\n\n");
    }
  
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}