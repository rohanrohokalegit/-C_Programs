#include <stdio.h>
void Display(int iNo1)
{
    if(iNo1<=10)
    {
        printf("Hello");

    }
    else{
        printf("Demo");
        
    }
}
int main()
{
    int ivalue1 = 0;
    printf("Enter The Number");
    scanf("%d", &ivalue1);
    Display(ivalue1);
    return 0;
}