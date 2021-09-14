// 2.Write a program which accept number from user and check whether it contains 0
// in it or not.
// Input : 2395
// Output : There is no Zero
// Input : 1018
// Output : It Contains Zero
// Input : 9000
// Output : It Contains Zero



#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkZero(int);
int main()
{
    int ivalue = 0;
    BOOL bret = FALSE;
    printf("Enter the number");
    scanf("%d", &ivalue);
    bret = chkZero(ivalue);
    if (bret == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is No Zero");
    }
    return 0;
}
BOOL chkZero(int iNo)
{
    int iDigit = 0;
    int icnt = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            icnt++;
        }

        iNo = iNo / 10;
    }
    if (icnt >= 1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}