//Program to print 5 times "Marvellous" on Screen


#include<stdio.h>
void Display(int iNo1)
{
int i=0;
for(i=1;i<=iNo1;i++)
{
    printf("Marvellous\t");
}
}
int main()
{
    int iValue1=5;
    Display(iValue1);
    return 0;

}