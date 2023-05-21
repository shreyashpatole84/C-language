#include<stdio.h>  // IO
#include<stdlib.h>  //memory management

int Addition(int Arr[],int iLength)
{
  int iSum = 0;
  int iCnt = 0;

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    iSum = iSum + Arr[iCnt];
  }
  return iSum;
    
}
int main()   // entry point function
{
  int iSize = 0;  // to store size of array
  int *ptr = NULL;  // to store address of array
  int iCnt = 0;   // LOop counter
  int iRet = 0;

  // step 1: Accept the number of elements from user
  printf("Enter number of elements : \n");
  scanf("%d",&iSize);

  // step 2: Allocate memory dynamically
  ptr = (int *)malloc(iSize * sizeof(int));

  // step 3: Accept the values from user
  printf("Enter the elements : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Elements of array are : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\n",ptr[iCnt]);
  }

  // step 4 : pass the array to the function
  iRet = Addition(ptr,iSize);   // Demo(400,4);
  printf("Addition is : %d\n",iRet);

  // step 6 : deaallocate the memory of array
  free(ptr);

  return 0;   // return succees to OS
}