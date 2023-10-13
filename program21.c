// Accept three numbers form user and return maximum number
#include<stdio.h>

int Largest(int iNo1, int iNo2 , iNo3)
{
    if((iNo1 > iNo2) && (ino1 > iNo3 ))
    {
        return iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3 ))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto int iValue3=0;

    auto int iRet=0;

    printf("Enter First no : \n");
    scanf("%d",&iValue1);

    printf("Enter Second no : \n");
    scanf("%d",&iValue2);

    printf("Enter third no : \n");
    scanf("%d",&iValue3);
    

    iRet=Largest(iValue1, iValue2, iValue3);

    printf("Largest  Number is : %d \n ", iRet);

    return 0;
}