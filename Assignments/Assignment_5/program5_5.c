#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(int cValue)
{
    if((cValue>='A') && (cValue<='Z'))
    {
        printf("Uppercase Alphabets");
    }
    else if((cValue>='a') && (cValue<='z'))
    {
        printf("Lowercase Alphabets");
    }
    else if((cValue>='0') && (cValue<='9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Charcater");
    }

}

int main()
{
    char cValue = '\0';
    printf("Enter a character:");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);
    return EXIT_SUCCESS;
}