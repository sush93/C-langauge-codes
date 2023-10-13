// first std exam 8 O clock
// second std exam 9o clock 
//third ------------ 10 o clock
//fouth ------------ 11 o clock
//fifth ------------ 12 o clok
#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    switch (iStandard)
    {
    case 1: 
        printf("Your Exam is at 8 Am \n ");
        break;
    case 2: 
        printf("Your Exam is at 9 Am \n ");
        break;
    case 3: 
        printf("Your Exam is at 10 Am \n ");
        break;
    case 4: 
        printf("Your Exam is at 11 Am \n ");
        break;
    case 5: 
        printf("Your Exam is at 12 Am \n ");
        break;
        
    default:
        printf("Wrong input... \n");
        break;
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