#include<stdio.h>
#include<stdbool.h>

bool strcmpx(char *str1, char *str2)
{
    for(;(*str1 != '\0') && (*str2 != '\0') &&(*str1 == *str2);str1++,str2++);
    
    return((*str1 == '\0') && (*str2 == '\0'));
    
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter first string : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter second string : \n");
    scanf("%[^'\n]s",Brr);
    bRet = strcmpx(Arr,Brr);

    if(bRet == true)
    {
        printf("Both the strings are identical\n");
    }
    else
    {
        printf("Both the strings are different\n");

    }

    return 0;
}