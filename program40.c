// forward loop
#include<stdio.h>
#include<stdbool.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
       iFact = iFact * iCnt;
    }
    return iFact;

}
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number : \n");
   scanf("%d",&iValue);

   iRet = Factorial(iValue);

    printf("result is : %d\n", iRet);

   
    return 0;
}