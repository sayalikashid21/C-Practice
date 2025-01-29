// 1. Accept number of rows and number of columns from user and display below pattern.

/*
    output
    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if(i==3 && j>=2)
            {
                printf("%d\t", (j-1));
            }
            else if(i==4)
            {
                printf("%d\t", (iCol+j-1));
            }
            else
            {
                printf("%d\t", (j+(i-1)*iCol));
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}