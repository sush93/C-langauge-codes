// first std exam 8 O clock
// second std exam 9o clock 
//third ------------ 10 o clock
//fouth ------------ 11 o clock
//fifth ------------ 12 o clok
#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if (iStandard == 1)
    {
        printf("ypur exam at 8 AM \n");
    }
    else if (iStandard == 2 )
    {
        printf("your exam at 9Am \n");
    }
    else if (iStandard == 3 )
    {
        printf("your exam at 10 Am \n");
    }
    else if (iStandard == 4 )
    {
        printf("your exam at 11 Am \n");
    }
    else if (iStandard == 5 )
    {
        printf("your exam at 12 Am \n");
    } 
}

int main()
{
    auto int iValue = 0;

    printf("Enter Your Standard : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);
    return 0;
}