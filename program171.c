#include<stdio.h>

int FirstOccurance(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        str++;
        
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&ch);

    iRet = FirstOccurance(Arr,ch);

    printf("First occurance of that character is at : %d\n",iRet);

    return 0;
}