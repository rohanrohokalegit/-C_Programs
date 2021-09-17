// 3. Write a program which accept distance in kilometre and convert it into meter. (1  kilometre = 1000 Meter)
// Input : 5
// Output : 5000
// Input : 12
// Output : 12000

#include <stdio.h>
int KMtoMeter(int);
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Kilometer\t");
    scanf("%d", &iValue);
    iRet = KMtoMeter(iValue);
    printf("meter is %d", iRet);
    return 0;
}
int KMtoMeter(int iNo)
{
    int Kilometer = 0;
    Kilometer = iNo * 1000;
    return Kilometer;
}
