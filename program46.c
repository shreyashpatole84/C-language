// prime numbers - do not have any factor (kontyahi sankhene devide hot nahi)
// without Flag
#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;

ULONG CalculatePower(int iBase,int iPower)
{
   int iCnt = 0;
   ULONG iResult = 1;

   if ((iBase < 0) || (iPower < 0))    // filter
   {
    return 0 ;
   }
    iCnt=1;
    while( iCnt<=iPower)
    {
        iResult = iResult * iBase;   
        iCnt++;
    }
    return iResult;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG iRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);

    printf("Enter power : \n");
    scanf("%d",&iValue2);

    iRet = CalculatePower(iValue1,iValue2);

   
    printf("result is : %d\n",iRet);
   
    return 0;
}