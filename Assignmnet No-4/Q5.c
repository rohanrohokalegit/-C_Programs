// 5.Write a program which accept number from user and return difference between  summation of all its factors and non factors.
// Input : 12
// Output : -34 (16 - 50)
// Input : 10
// Output : -29 (8 - 37)

#include <stdio.h>
int factDifference(int);
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number\n");
    scanf("%d", &iValue);
    iRet = factDifference(iValue);
    printf("Factors Difference is:%d\n", iRet);
    return 0;
}
int factDifference(int iNo1)
{
    int i = 0;
    int oddCount = 0;
    int evenCount = 0;
    for (i = 1; i <= iNo1; i++)
    {
        if (iNo1 % i != 0)
        {
        
            oddCount = oddCount + i;
        }
    }
    for (i = 1; i <= iNo1/2; i++)
    {
        if (iNo1 % i == 0)
        {
        
            evenCount = evenCount + i;
        }
    }

    return oddCount - evenCount;
}