/*
    input :
    Row: 4
    column : 4

    output :
    1   &   3   &
1   &   3   &   
 1   &   3   &
    1   &   3   &
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Arr[2] = {'*','#'}; 

    for(i = 1;i <= iRow; i++)
    {
       
        for(j = 1; j <= iCol; j++)
        {
            if((j % 2)==1)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("&\t");
            }
        }
        
        printf("\n");
    }
   
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    
    return 0;
}