// 5. Accept on character from user and check whether that character is vowel  (a,e,i,o,u) or not.
// Input : E Output : TRUE
// Input : d Output : FALSE

#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL checkVowels(int ch)
{
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        return TRUE;
    }
    else if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char ch = '\0';
    BOOL bRet = FALSE;
    printf("Enter The Vowels\n");
    scanf("%c", &ch);
    bRet = checkVowels(ch);
    if (bRet == TRUE)
    {
        printf("it is Vowels");
    }
    else
    {
        printf("it is not Vowels");
    }
    return 0;
}