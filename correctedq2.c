//
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void palidromecheck(char string2[30]);

void main()
{
    char string1[30];
    system("cls");
    printf("Enter a tsting to check: \n");
    gets(string1);
    // puts(string1); //input
    palidromecheck(string1);
}

void palidromecheck(char string2[30])
{
    // puts(string2);
    int i, length = 0, j, flag = 0;
    char stringcopy[30];
    for (i = 0; string2[i] = '\0'; i++)
    {
        length++; //finding length
    }
    printf("\n1\n");
    printf("Length = %d", length);
    // puts(string2);
    j = length - 1;
    for (i = 0; i < length; i++) //abcde stringcopy==edcba///   dad = dad
    {
        stringcopy[j] = string2[i]; //copying the string
        j--;
    }
    puts(stringcopy);
    for (i = 0; i < length; i++)
    {
        if (stringcopy[i] != string2[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("The string is not palindrome.");
    }
    else
    {
        printf("The string is palindrome.");
    }
}