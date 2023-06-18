// Input : 7
// Output : 0   1   2   3   4   5   6   7
// Input : 3
// Output : A   A   A

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iNo; iCnt++)
    {
        printf("%d\t",iCnt-1);
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}