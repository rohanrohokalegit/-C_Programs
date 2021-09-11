/*
1.Write a program which accept one number from user and print that number of  even numbers on screen.  
Input : 7  
Output: 2 4 6 8 10 12 14 
*/

#include <stdio.h>
void evenNumber(int); // declaration of the function
int main()            //Entry Point Function
{
    int iValue = 0; //i is a Variable of type integer currently intalized with value 0;

    printf("Enter The Number");
    scanf("%d", &iValue);
    evenNumber(iValue);
    return 0;
}
void evenNumber(int iNo1) // function definations
{
    int i = 0;
    for (i = 1; i <= iNo1*2; i++)
    {
        if ((i % 2) == 0)
        {
            printf("%d\t", i);
        }
    }
}