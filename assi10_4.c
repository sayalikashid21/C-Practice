// 3. Write a program which accept range from user and return addition of all even numbers in between that range.
// Range should contain positive numbers only

#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range\n");
        return iSum;
    }

    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        if(iCnt %2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Sum is: %d", iRet);

    return 0;
}
