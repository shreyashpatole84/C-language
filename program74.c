#include<stdio.h>  // IO
#include<stdlib.h>  //memory management

int main()   // entry point function
{
  int iSize = 0;  // to store size of array
  int *ptr = NULL;  // to store address of array
  int iCnt = 0;   // LOop counter

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


  return 0;   // return succees to OS
}