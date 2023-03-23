#include <stdio.h>
#include <string.h>

int control(char *word, char letter)
{

    int count = 0;
    int len = strlen(word);

    for (int i = 0; i < len; i++)
    {

        if (word[i] == letter)
        {

            count++;
        }
    }

    return count;
}

int main()
{

    char word[100];
    char letter;
    int counter;

    printf("Enter a word : ");
    fgets(word, sizeof(word), stdin);
    // scanf("%s", word);

    printf("\nEnter a letter : ");
    scanf("%c", &letter);

    // printf("The word you entered = %s", kelime);

    // printf("The letter you entered = %c", letter);

    counter = control(word, letter);
    printf("%d times letter y", counter);

    return 0;
}