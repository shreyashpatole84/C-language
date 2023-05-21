// Display 1 to 5 on the screen.
#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)  /// filter for negative input
    {
        printf("Note : Enter the positive value\n\n");
        return;
    }
    int iCnt = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }


}

int main()
{
    int iValue =0;

    printf("Enter the frequency\n");
    scanf("%d/n",&iValue);
    Display(iValue);
   
    return 0;
}