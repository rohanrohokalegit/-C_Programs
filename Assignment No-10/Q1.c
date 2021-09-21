// 1. Accept number of rows and number of columns from user and display  below pattern.
// Input : iRow = 4 iCol = 3
// Output :
// * * *
// * * *
// * * *
// * * *

#include <stdio.h>
void displayPattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter The Row's");
    scanf("%d", &iValue1);
    printf("Enter The column's");
    scanf("%d", &iValue2);
    displayPattern(iValue1, iValue2);
    return 0;
}