#include<stdio.h>


void strncatX(char *src, char*dest, int iLength)
{
  // 1 Travel till end of dest
  while(*dest != '\0')
  {
    dest++;
  }
  
  //2 copy data from src to dest
  while(*src != '\0')
  {
    *dest = *src;
    dest++;
    src++;
    
    iLength--;
    if(iLength == 0)
    {
      break;
    }
  }
    // 3 write '\0' at end of dest
  *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter the no of letters that you want to add : \n");
    scanf("%d",&iNo);

    strncatX(Arr,Brr,iNo);

    printf("String after copy is : %s\n",Brr);

    return 0;
}