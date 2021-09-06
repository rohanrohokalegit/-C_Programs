#include <stdio.h>
void Display(int iNo1, int iNo2)
{
    if (iNo2 < 0)
    {
        iNo2 = -iNo2;
    }
    int i = 0;
    for (i = 1; i <= iNo2; i++)
    {
        printf("%d\t", iNo1);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter The First Number");
    scanf("%d", &iValue1);
    printf("Enter the Second Number");
    scanf("%d", &iValue2);
    Display(iValue1, iValue2);
    return 0;
}