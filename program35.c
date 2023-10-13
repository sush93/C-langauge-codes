#include<stdio.h>
#include<stdbool.h>

int DisplyFactors(int iNo)
{
    int iCnt=0;

    printf("FActor of %d are : ",&iNo);
    
    for(iCnt=1; iCnt<= (iNo/2); iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d",iCnt);
        }
    }
}

int main()
{

    int iValue=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}