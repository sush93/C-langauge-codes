#include<stdio.h>

void Display(int iNo)
{

    int iCnt=0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }

}
int main()
{   
    int iValue=0;
    printf("Enter the number that you want to print jay ganesh on the screen\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}