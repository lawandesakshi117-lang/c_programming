#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(int fMarks)
{
    if((fMarks < 0) || (fMarks > 100))
        {
             printf("Invalid Marks");
        }
        else if(fMarks >= 90)
        {
            printf("Grade A");
        }
        else if(fMarks >= 75)
        {
            printf("Grade B");
        }
        else if(fMarks >= 60)
        {
            printf("Grade C");
        }
        else if(fMarks >= 40)
        {
            printf("Grade D");
        }
        else
        {
            printf("Fail");
        }  
}
int main()
{
    int fMarks = 0;
    printf("Enter marks:");
    scanf("%d",&fMarks);

    DisplayGrade(fMarks);
    return EXIT_SUCCESS;
}