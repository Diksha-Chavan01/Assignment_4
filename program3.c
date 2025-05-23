///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Used to accept number from user and display all its non factors
//  Input :         12
//  Output :        5 7 8 9 10 11
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)          //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}