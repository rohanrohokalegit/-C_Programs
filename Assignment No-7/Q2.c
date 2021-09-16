// 2. Write a program which accept width & height of rectangle from user and calculate  its area. (Area = Width * Height)
//Input : 5.3 9.78
//Output : 51.834

#include <stdio.h>
float calculateArea(float, float);
int main()
{
    float Width = 0.0;
    float Hight = 0.0;
    float fRet = 0.0;
    printf("Enter the Width\t");
    scanf("%f", &Width);
    printf("Enter the Hight\t");
    scanf("%f", &Hight);
    fRet = calculateArea(Width, Hight);
    printf("Area of Rectangle is:%f", fRet);
    return 0;
}
float calculateArea(float fWidth, float fHight)
{
    float Area;

    Area = fWidth * fHight;
    return Area;
}