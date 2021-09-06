#include<stdio.h>
void Display(int iNo1)
{
    int i=0;
    for(i=1;i<=iNo1;i++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue1=0;
    printf("Enter the number");
    scanf("%d",&iValue1);
    Display(iValue1);
    return 0;
}