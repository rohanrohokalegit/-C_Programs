// 2.Write a program which accept number from user and return the count of odd  digits.
// Input : 2395
// Output : 3
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// Input : 8462
// Output : 0

#include <stdio.h>
int countOdd(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int Digit = 0;
    int icnt = 0;
    while (iNo != 0)
    {
        Digit = iNo % 10;
        if (Digit % 2 != 0)
        {

            icnt++;
        }
        iNo = iNo / 10;
    }
    return icnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number");
    scanf("%d", &iValue);
    iRet = countOdd(iValue);
    printf("%d", iRet);
    return 0;
}
