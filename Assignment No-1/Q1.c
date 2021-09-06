//1.Program to divide two numbers

#include <stdio.h>
int Divide(int iNo1, int iNo2)
{
    int Result = 0;

    if (iNo2 >= iNo1)
    {
        return -1;
    }
    Result = iNo1 / iNo2;
    return Result;
}
int main()
{
    int iValue1 = 15;
    int iValue2 = 5;
    int Ret = 0;
    Ret = Divide(iValue1, iValue2);
    printf("Division is: %d", Ret);
    return 0;
}