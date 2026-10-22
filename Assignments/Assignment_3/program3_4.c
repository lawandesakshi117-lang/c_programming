#include<stdio.h>
void DisplayConvert(char CValue)
{
    int iCnt=0;
    iCnt= CValue-'A';
    if((iCnt>=0) && (iCnt<=25))
    {
        printf("%c",CValue-'A'+'a');
    }
    else{
        printf("%c",CValue-'a'+'A');
    }
     
}
int main()
{
    char cValue='\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;
}