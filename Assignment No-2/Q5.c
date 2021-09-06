#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL evnCheck(int iNo1)
{
    if (iNo1 % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0;
    BOOL bret = FALSE;
    printf("Enter The First Number");
    scanf("%d", &iValue1);
    bret = evnCheck(iValue1);
    if (bret == TRUE)
    {
        printf("it is a even number");
    }
    else
    {
        printf("it is not even number");
    }
    return 0;
}