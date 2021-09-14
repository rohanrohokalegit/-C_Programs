// 5.Write a program which accept number from user and return difference between  summation of even digits and summation of odd digits.
// Input : 2395
// Output : -15 (2 - 17)
// Input : 1018
// Output : 6 (8 - 2)
// Input : 8440
// Output : 16 (16 - 0)
// Input : 5733
// Output : -18 (0 - 18)

#include <stdio.h>
int diffCount(int iNo)
{
    int Digit = 0;
    int evenCount = 0;
    int oddCount = 0;
    int Temp = 0;
    while (iNo != 0)
    {
        Digit = iNo % 10;
        if (Digit % 2 == 0)
        {
            evenCount = evenCount + Digit;
        }
        else
        {

            oddCount = oddCount + Digit;
        }
        iNo = iNo / 10;
    }

    return evenCount - oddCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number");
    scanf("%d", &iValue);
    iRet = diffCount(iValue);
    printf("%d", iRet);
    return 0;
}