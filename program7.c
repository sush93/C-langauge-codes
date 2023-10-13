#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         Additon
//  Description:            It is used to perform Additon of 2 integes 
//  Input Arguments:        Integer, Integer
//  Output:                 Integer
//  Author:                 Sushant Shivaji Kakade 
//  Date:                   25-09-2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Additon(int iNo1, int iNo2)
{
    int iSum=0;             // Variable to store the value of additon
    iSum = iNo1 + iNo2;
    return iSum;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//Entry point fuction of an application which performs addtionof 2 integers
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    auto int ivalue1=0;         //Variable to store first input
    auto int ivalue2=0;         //Variable to store second input
    auto int iAnswer=0;         //variable to store The Result
    printf("Enter first number \n ");
    scanf("%d",&ivalue1);

    printf("Enter Second number \n ");
    scanf("%d",&ivalue2);

    iAnswer = Additon(ivalue1, ivalue2);    //Function CAll to Perform Addition

    printf("Additon of Two numbers is : %d ",iAnswer);

    return 0;

}
