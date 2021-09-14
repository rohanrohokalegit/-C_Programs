// 3.Write a program which accept number from user and return the count of digits in  between 3 and 7.
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0
// Input : 4521
// Output : 2
// Input : 9922
// Output : 0

#include <stdio.h>
int countRange(int iNo)
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
        if ((Digit > 3) && (Digit <= 7))
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
    iRet = countRange(iValue);
    printf("%d", iRet);
    return 0;
}
