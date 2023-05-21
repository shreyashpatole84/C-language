// write a program which accept marks and display class accordingly 5.
//0 to 34       fail
// 34 to 49     pass class
// 50 to 59     second class
//60 to 74      first class
//75 to 100     first class with deistinction

#include<stdio.h>     // for printf and scanf

void DisplayClass(float fMarks)
{   if((fMarks < 0.0f) || (fMarks > 100.00f))
    {
        printf("Invalid Input\n");
        printf("Please entr the marks between 0 and 100");
    }
    if((fMarks >=0.0f) && (fMarks < 35.00f))
    {
        printf("You are fail\n");
    }
    else if((fMarks >=35.00f) && (fMarks < 50.00f))
    {
        printf("You got pass class\n");
    }
    else if((fMarks >=50.00f) && (fMarks < 60.00f))
    {
        printf("You got second class\n");
    }
    else if((fMarks >=60.00f) && (fMarks < 75.00f))
    {
        printf("You got first class\n");
    }
    else if((fMarks >=75.00f) && (fMarks <= 100.00f))
    {
        printf("You got first class with distinction\n");
    }
}


int main()
{
   float fValue = 0.0f;

   printf("please enter your percentage : \n");
   scanf("%f",&fValue);

   DisplayClass(fValue);

   return 0;
}

/*
Logical Operator

1 : Logical AND &&

2 : Logical OR ||

*/