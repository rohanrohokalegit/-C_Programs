// 4. Accept one character from user and convert case of that character.
// Input : a Output : A
// Input : D Output : d

#include <stdio.h>
void convertCharacter(char);
int main()
{
    char ch = '\0';
    printf("Enter The Characters\n");
    scanf("%c", &ch);
    convertCharacter(ch);
    return 0;
}
void convertCharacter(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\t", ch + 32);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c", ch - 32);
    }
}