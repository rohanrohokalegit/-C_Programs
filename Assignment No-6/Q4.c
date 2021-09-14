// 4.Write a program which accept number from user and return multiplication of all  digits.
// Input : 2395
// Output : 270
// Input : 1018
// Output : 8
// Input : 9440
// Output : 144
// Input : 922432
// Output : 864

#include <stdio.h>
int multCount(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int Digit = 0;
    int icnt = 1;
    while (iNo != 0)
    {
        Digit = iNo % 10;
        if (Digit == 0)
        {
            iNo = iNo / 10;
            Digit = iNo % 10;
        }
        icnt = icnt * Digit;
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
    iRet = multCount(iValue);
    printf("%d", iRet);
    return 0;
}
