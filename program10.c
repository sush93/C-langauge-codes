#include<stdio.h>
long int CalculateCube(int ivalue)
{   
    long int iCubeAns=0;

    iCubeAns= ivalue*ivalue*ivalue;
    return iCubeAns;
}

int main()
{
    auto int iNo=0;
    auto long int iAns=0;

    printf("Enter the number : \n ");
    scanf("%d",&iNo);

    iAns=CalculateCube(iNo);

    printf("Enter numbers cube is : %ld",iAns);
    return 0;
}