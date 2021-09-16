// 1.Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14. (Area = PI * Radius * Radius)
// Input : 5.3
// Output : 88.2026
// Input : 10.4
// Output : 339.6224

#include <stdio.h>
float calculateArea(float);
int main()
{
    float iValue = 0.0;
    float fRet = 0.0;
    printf("Enter the Radius");
    scanf("%f", &iValue);
    fRet = calculateArea(iValue);
    printf("Area of Circle is:%f", fRet);
    return 0;
}
float calculateArea(float fRadius)
{
    float Area;
    float PI = 3.14;
    Area = PI * fRadius * fRadius;
    return Area;
}