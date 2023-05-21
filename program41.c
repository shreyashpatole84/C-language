// typedef
#include<stdio.h>

typedef unsigned long int UNLONG;

UNLONG Factorial(int iNo)
{
    int iCnt = 0;
    UNLONG iFact = 1;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
       iFact = iFact * iCnt;
    }
    return iFact;

}
int main()
{
   int iValue = 0;
   UNLONG iRet = 0;

   printf("Enter number : \n");
   scanf("%d",&iValue);

   iRet = Factorial(iValue);

    printf("result is : %d\n", iRet);

   
    return 0;
}