

#include <stdio.h>
void Display(int iNo1)
{
    while (iNo1 >= 1)
    {
        printf("*\t");
        iNo1--;
    }
}
int main()
{
    int ivalue1 = 0;
    printf("Enter the Number");
    scanf("%d", &ivalue1);
    Display(ivalue1);
    return 0;
}