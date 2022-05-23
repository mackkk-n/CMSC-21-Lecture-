#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int occurences1[26], occurences2[26];

void scan_word(int occurence[26])
{
    char c;
    int *p;

    int *occ1, *occ2;
    occ1 = occurences1;
    occ2 = occurences2;
    p=occurence;


    printf("Enter first word: ");
    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
        {
            (*(occurence + (toupper(c) - 'A')))++;
            *(occurences1 + (toupper(c) - 'A')) = *(occurence + (toupper(c) - 'A'));
        }
    }

    for (int i = 0; i < 26; i++)
    {
        *p++ = 0;
    }

    printf("\nEnter second word: ");
    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
        {
            (*(occurence + (toupper(c) - 'A')))++;
            *(occurences2 + (toupper(c) - 'A')) = *(occurence + (toupper(c) - 'A'));

        }
    }

}

bool is_anagram(int occurences1[26], int occurences2[26])
{
    int *o1, *o2;
    o1 = occurences1;
    o2 = occurences2;
    for (int i = 0; i < 26; i++)
    {
        if (*o1 != *o2)
            return 0;
        o1++;
        o2++;
    }

    return 1;
}

int main()
{
    printf("ANAGRAMS OR NOT\n");
    int i, same = 1, letters[26] = {0};

    scan_word(letters);

    same = is_anagram(occurences1, occurences2);

    if (same)
    {
        printf("\nThe words are anagrams.");
        return 0;
    }
    printf("\nThe words are not anagram.");

    return 0;
}
