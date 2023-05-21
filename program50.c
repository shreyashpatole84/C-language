#include<stdio.h>

int CountDigits(int iNo)
{
  int iSum = 0;
  int iDigit = 0;

  while(iNo != 0)
  {
   iDigit = iNo % 10;
   iSum = iSum + iDigit;
    iNo = iNo / 10;
  }
  return iSum;
  
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Addition is : %d\n",iRet);

    return 0;
}