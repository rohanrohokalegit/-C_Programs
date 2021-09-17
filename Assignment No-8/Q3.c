// 3. Write a program which accept range from user and return addition of all numbers
// in between that range. (Range should contains positive numbers only)
// Input : 23 30
// Output : 212
// Input : 10 18
// Output : 126
// Input : -10 2
// Output : Invalid range
// Input : 90 18
// Output : Invalid range

#include <stdio.h>
int rangeAddition(int, int);
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    printf("Enter The First Number");
    scanf("%d", &iValue1);
    printf("Enter The Second Number");
    scanf("%d", &iValue2);
    iRet = rangeAddition(iValue1, iValue2);
    if (iRet < 0)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition is %d", iRet);
    }
    return 0;
}
int rangeAddition(int iStart, int iEnd)
{
    if (iStart < 0)
    {
        return -1;
    }

    if (iStart > iEnd)
    {
        return -1;
    }

    int iCnt = 0;
    int iSum = 0;
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}