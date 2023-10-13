#include<stdio.h>
//Addition is a function whicch accept 2 parameter as integers and it returns integers 
int Additon(int iNo1, int iNo2)
{
    int iSum=0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    auto int ivalue1=0;
    auto int ivalue2=0;
    auto int iAnswer=0;
    printf("Enter first number \n ");
    scanf("%d",&ivalue1);

    printf("Enter Second number \n ");
    scanf("%d",&ivalue2);

    iAnswer = Additon(ivalue1, ivalue2);

    printf("Additon of Two numbers is : %d ",iAnswer);

    return 0;

}
