// 1.Write a program which accept number from user and display its multiplication of  factors.
// Input : 12
// Output : 144 (1 * 2 * 3 * 4 * 6)
// Input : 13
// Output : 1 (1)
// Input : 10
// Output : 10 (1 * 2 * 5)

#include <stdio.h>
int factMultiplications(int);
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number\n");
    scanf("%d", &iValue);
    iRet = factMultiplications(iValue);
    printf("Factors Multiplications:%d\n", iRet);
    return 0;
}
int factMultiplications(int iNo1)
{
    int i = 0;
    int Count = 1;
    for (i = 1; i <= iNo1 / 2; i++)
    {
        if (iNo1 % i == 0)
        {
            Count = Count * i;
        }
    }
    return Count;
}