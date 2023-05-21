// write a program which checks wether number is even or odd.

#include<stdio.h>     // for printf and scanf
#include<stdbool.h>   // for bool data type
////////////////////////////////////////////////////////////////////////
//
// Function name: CheckEvenOdd
// Input :        Integer
// Output:        Bolean
// Description:   Check whether input is even or odd
// Author:        Shreyas Prakash Patole
// Date:          25/04/2023
// Update date :  26/04/2023
//
////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Entry point function.
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;            // variable to accept input
    bool bRet = false;         // variable to accept retrn value

    printf("Please enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);      // function call
    
    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0;
}