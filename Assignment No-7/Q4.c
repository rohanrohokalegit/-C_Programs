// 4. Write a program which accept temperature in Fahrenheit and convert it into  celsius. (1 celsius = (Fahrenheit -32) * (5/9))
// Input : 10
// Output : -12.2222 (10 - 32) * (5/9)
// Input : 34
// Output : 1.11111 (34 - 32) * (5/9)

#include <stdio.h>
double FhtoCs(double);
int main()
{
    double iValue = 0.0;
    double fRet = 0.0;
    printf("Enter temperature in Fahrenheit:");
    scanf("%lf", &iValue);
    fRet = FhtoCs(iValue);
    printf("temperatfure in celsius is:%f", fRet);
    return 0;
}
double FhtoCs(double fTemp)
{
    double celsius = 0.0;
    celsius = ((fTemp - 32) * (5 / 9.0));
    return celsius;
}
