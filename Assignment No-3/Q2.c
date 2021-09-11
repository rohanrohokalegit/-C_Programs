// 2. Write a program which accept number from user and print even factors of that  number.
// Input : 24
// Output: 1 2 4 6 8 12

#include <stdio.h>
void evenFactors(int); // declaration of the function
int main()             //Entry Point Function
{
    int iValue = 0; //i is a Variable of type integer currently intalized with value 0;

    printf("Enter The Number");
    scanf("%d", &iValue);
    evenFactors(iValue);
    return 0;
}
void evenFactors(int iNo1) // function definations
{
    if (iNo1 <= 0) //filter
    {
        return;
    }
    if (iNo1 < 0) //Updator
    {
        iNo1 = -iNo1;
    }

    int i = 0;
    for (i = 1; i <= iNo1 / 2; i++)
    {
        if ((iNo1 % i) == 0)
        {
            printf("%d\t", i);
        }
    }
}