// 1. Accept number from user and display below pattern.

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch ='\0';

    for(iCnt=1, ch='A'; iCnt<=iNo; iCnt++,ch++)
    {
        printf("%c\n",ch);
    }
    printf("\n");
}

int main()
{
    int iValue=0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}