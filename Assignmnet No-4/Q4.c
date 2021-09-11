// 4.Write a program which accept number from user and return summation of all its  non factors. 
// Input : 12 
// Output : 50 
// Input : 10 
// Output : 37 


#include <stdio.h>
int factSummations(int);
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number\n");
    scanf("%d", &iValue);
    iRet = factSummations(iValue);
    printf("Factors factSummations is:%d\n", iRet);
    return 0;
}
int factSummations(int iNo1)
{
    int i = 0;
    int Count = 0;
    for (i = 1; i <= iNo1 ; i++)
    {
        if (iNo1 % i != 0)
        {
            Count = Count + i;
        }
    }
    return Count;
}