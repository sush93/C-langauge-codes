//Problem Statement : Accept radious from user and calculate the area of circle

//step 1: understand the problem statement 
//Conclusion: we are going to use the formula as PI*R*R

//step 2: Algorithm
/*
    START
        Acceprt radius from user and store into RADIOUS
        Create variable as PI and store value 3.14
        Calculate area PI * RADIOUS * RADIOUS
        Dispaly the value of Area to the user
    STOP
*/
///////////////////////////////////////////////////////////////////////////
// Function Name :       CalculateArea
// Description:          it is used to calculate area of circle
// Input:                float
// Output:               float
// Auther Name:          sushant shivaji kakade
// Date:                 02/10/2023
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

float calculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto const float PI = 3.14f;

    fAns = PI * fValue *fValue;
    return fAns;
}
//////////////////////////////////////////////////////////////
//
//  Entry Point function
//
/////////////////////////////////////////////////////////////

int main()
{
    auto float fRadious = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radious of circle : \n ");
    scanf("%f",&fRadious);
    
    fArea= calculateArea(fRadious);
    printf("Area of circle is : %f",fArea);
    return 0;
}