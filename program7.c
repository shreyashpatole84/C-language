// write a program which checks wether number divisible by 3 and 5.

#include<stdio.h>     // for printf and scanf
#include<stdbool.h>   // for bool data type
////////////////////////////////////////////////////////////////////////
//
// Function name: CheckDivisible
// Input :        Integer
// Output:        Bolean
// Description:   Check whether input is divisible by 3 and 5
// Author:        Shreyas Prakash Patole
// Date:          25/04/2023
// Update date :  26/04/2023
//
////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 5) == 0) && ((iNo % 3) == 0))
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

    printf("Please enter number to check whether it is divid=sible by 3 and 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);      // function call
    
    if(bRet == true)
    {
        printf("%d is completely divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not completely divisible by 3 and 5\n",iValue);
    }
    return 0;
}

/*
Logical Operator

1 : Logical AND &&

2 : Logical OR ||

*/