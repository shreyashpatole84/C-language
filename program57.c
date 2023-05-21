#include<stdio.h>
#include<stdbool.h>

bool CountDigitFrequency(int iNo)
{
  int iDigit = 0;
  int iCount = 0;

  while(iNo != 0)
  {
    iDigit = iNo % 10;

    if(iDigit == 8)
    {
      iCount++;
    }
    iNo = iNo / 10;
  }
  return iCount;
}

int main()
{
  int iValue = 0;
  int iRet = false;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  iRet = CountDigitFrequency(iValue);
  
  printf("Frequency of 8 is : %d\n",iRet);



  return 0;
}