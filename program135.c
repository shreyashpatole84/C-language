/*
    input :
    Row: 4
    column : 4

    output :
*   *   *   *   *   *
%   %   %   %   %   %
%   %   %   %   %   %
%   %   %   %   %   %
%   %   %   %   %   %
*   *   *   *   *   *

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }
    
    for(i = 1;i <= iRow; i++)
    {
       
        for(j = 1; j <= iCol; j++)
        {
            if((i==j))       // diagonal
            {
                printf("*\t");
            }
            else if(i<j)     // upper triangle
            {
                printf("@\t",i);
            }
           
            else     // lower triangle
            {
                printf("$\t");
            }
        }
        
        printf("\n");
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