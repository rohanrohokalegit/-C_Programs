// 5. Write a program which accept area in square feet and convert it into square  meter. (1 square feet = 0.0929 Square meter)
// Input : 5
// Output : 0.464515
// Input : 7
// Output : 0.650321

#include <stdio.h>
double squareMeter(int);
int main()
{
    int ivalue = 0;
    double dRet = 0.0;
    printf("Enter The Area");
    scanf("%d", &ivalue);
    dRet = squareMeter(ivalue);
    printf("%f", dRet);
    return 0;
}
double squareMeter(int iNo)
{
    double squareFeet = 0.0;
    squareFeet = iNo * 0.0929;
    return squareFeet;
}