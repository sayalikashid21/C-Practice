// 2. Accept number of rows and number of columns from user and display below pattern.

/*
    output
    *   *   *   *
    *   *   *   
    *   *   
    *  
    
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
   
    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=(iCol-(i-1)); j++)
        {
            printf("*\t");
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