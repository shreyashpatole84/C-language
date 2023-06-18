#include<stdio.h>
#define ERR_NOTFOUND -1

void Frequency(char *str)
{
    int iSCnt = 0;
    int iLCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <='z'))
        {
            iSCnt++;
        }
        else if((*str >= 'A') && (*str <='Z'))
        {
            iLCnt++;
        }
        str++;
    }
    printf("Small case character count : %d\n",iSCnt);
    printf("Capital case character count : %d\n",iLCnt);
}


int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    Frequency(Arr);

    return 0;
}