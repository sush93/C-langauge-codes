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
#include<stdio.h>
/////////////////////////////////////////////////////
//
//
//
//
///////////////////////////////////////////////////
double CalRadious(double dRADIOUS, double dAns)
{
    double PI=3.14;
    dAns= PI*dRADIOUS*dRADIOUS;
    return dAns;

}
int main()
{
    double dRadious=0.00;
    double dAnswer=0.00;
    printf("Enter the radious \n ");
    scanf("%f",&dRadious);
    dAnswer= CalRadious(dRadious);


}
