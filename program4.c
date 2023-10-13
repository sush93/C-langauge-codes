#include<stdio.h>
int main()
{
    auto int ivalue1=0;
    auto int ivalue2=0;
    auto int iAnswer=0;
    printf("Enter first number \n ");
    scanf("%d",&ivalue1);

    printf("Enter Second number \n ");
    scanf("%d",&ivalue2);

    iAnswer = ivalue1 + ivalue2;

    printf("Additon of Two numbers is : %d ",iAnswer);

    return 0;

}
