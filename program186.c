#include<stdio.h>

void strcpytoggleX(char *src, char*dest)
{
    while(*src != '\0')   
    {
        if((*src >='A') && (*src <='Z'))
        {
            *dest = *src + 32;
        }
        else if((*src >='a') && (*src <='z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest=*src;
        }
        src++;
        dest++;
    }
    *dest ='\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    strcpytoggleX(Arr,Brr);

    printf("String after copy is : %s\n",Brr);

    return 0;
}