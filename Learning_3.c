# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>


int main(){

    // getchar()
    // assigns the value read from the keyboard to a char variable.
    // In this case, the leftmost bit of the int value is disabled.
    printf("--------------------------\n");
    char a;
    char b;
    // printf("Enter First Character : ");
    // a = getchar();
    // printf("Enter Second Characters : ");
    // b = getchar();

    // printf("You characters : %c %c", a, b);

    printf("\n----------------------------------\n");
    
    // fgets 
    // It reads a maximum of 1 less than the count parameter value from the given file stream and 
    // assigns the read characters to the character string indicated by the str parameter. 
    // When the end of file is reached or a newline character is encountered, the process 
    // ends without reading the specified number of characters.
    // When using the stdin value in the stream parameter, character input can also be read from the keyboard.

    // char sentence[50];
    // puts("Enter a sentence : \n");

    // read line of text
    //fgets(sentence, sizeof(sentence), stdin);
    // printf("\nsentence : %c", putchar(sentence));  // Writes a single character to the screen.
    printf("\n------------------------------------\n");


    // getchar : puts to read characters from the standard input into character array sentence and display the characters as a string.

    // sprintf : print formatted data into array s—an array of characters.
    int num1 = 10;
    float num2 = 23.74;
    char word[] = "yusuf";
    char sum[30];

    sprintf(sum, "%d %f %s", num1, num2, word);
    printf("Final Sentence : %s", sum);

    int num3;
    float num4;
    char word2[10];
    char sum2[30];

    printf("\nEnter integer, float and string : ");
    scanf("%d %f %s", &num3, &num4, &word2);

    sprintf(sum2, "%d %.3f %s", num3, num4, word2);
    printf("Final Sentence2 : %s", sum2);

    printf("\n-------------------------------\n");

    // sscanf : read formatted data from character array final.


    int number;
    float number2;
    char new_word[10];
    char final[30];

    printf("Enter integer, float and string : ");
    scanf("%d %f %s", &number, &number2, &new_word);

    sprintf(final, "%d %.3f %s", number, number2, new_word);
    printf("\nThe sentences : %s", final);

    sscanf(final, "%d %.3f %s", &number, &number2, new_word);
    printf("\nRead values : %d %.3f %s", number, number2, new_word);

    printf("\n-----------------------------\n");

    // String Manipulation Functions
    // strcpy and strncpy
    # define SIZE1 20
    # define SIZE2 20

    char main_sentence[] = "My Name is Yusuf ";
    char sentence1[SIZE1];
    char sentence2[SIZE2];

    // copy content of main_sentence to sentence1
    printf("Main Sentence : %s \tCopy Sentence : %s", main_sentence, strcpy(sentence1, main_sentence));

    printf("\nMain Sentence : %s \tNCopy Sentence : %s", main_sentence, strncpy(sentence2, main_sentence, 5));
    // first 5 characters

    printf("\n---------------------------------------\n");

    // strcat and strncat
    char cat_sentence1[] = "My name";
    char cat_sentence2[] = "is Yusuf.";
    char cat_sentence3[] = " Hello World!";

    printf("Concatenate of sentence1 and sentence2 : %s", strcat(cat_sentence1, cat_sentence2));
    printf("Concatenate of sentence1 and sentence3 with strncat : %s", strncat(cat_sentence1, cat_sentence3, 6));
    printf("\nConcatenate of sentence1 and sentence3 with strncat : %s", strcat(cat_sentence1, cat_sentence3));
    // display "My name hello hello world"

    printf("\n--------------------------------------\n");

    // strcmp and strncmp : Compares the strings and return 0, more tahn 0 and less than zero
    char cmp_sentence1[] = "Hello World";
    char cmp_sentence2[] = "Hello World";
    char cmp_sentence3[] = "hello world";
    char cmp_sentence4[] = "hello world!";

    printf("sentence1 and sentence2 : %d", strcmp(cmp_sentence1, cmp_sentence2));  // because they are equal
    printf("\nsentence2 and sentence3 : %d", strcmp(cmp_sentence2, cmp_sentence3));  // they are not equal
    printf("\nsentence3 and sentence4 : %d", strcmp(cmp_sentence3, cmp_sentence4));  

    const char *cmpn_sentence1 = "Hello";
    const char *cmpn_sentence2 = "Hello";
    const char *cmpn_sentence3 = "How are you";
    const char *cmpn_sentence4 = "how are you";

    printf("\nsentence1 and sentence2 : %d", strncmp(cmpn_sentence1, cmpn_sentence2, 4));  // because they are equal
    printf("\nsentence2 and sentence3 : %d", strncmp(cmpn_sentence2, cmpn_sentence3, 4));  // they are not equal
    printf("\nsentence3 and sentence4 : %d", strncmp(cmpn_sentence3, cmpn_sentence4, 4));


    return 0;
}

