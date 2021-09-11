// 2.Write a program which accept number from user and display its factors in  decreasing order.
// Input : 12
// Output : 6 4 3 2 1
// Input : 13
// Output : 1
// Input : 10
// Output : 5 2 1

#include <stdio.h>
void factDecreasingOrder(int);
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number\n");
    scanf("%d", &iValue);
    factDecreasingOrder(iValue);
    return 0;
}
void factDecreasingOrder(int iNo1)
{
    int i = 0;
    for (i = iNo1 / 2; i >= 1; i--)
    {
        if (iNo1 % i == 0)
        {
            printf("%d\t", i);
        }
    }
}
