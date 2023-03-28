# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>


int main(){

    printf("-------------------------------------\n");

    // strchr : searches for the first occurrence of a character in a string
    // # char x = 'yusuf'

    char sentence1[] = "Hello My name is Yusuf";
    char s1 = 'n';  // for search
    // char s2 = 'k';

    // printf("In this sentence %s beginning with %c", strchr(sentence1, s), s);

    if(strchr(sentence1, s1) != NULL){
        printf("'%c' is exist in '%s'.", s1, sentence1);
    }

    else{
        printf("'%c' not exist in '%s'.", s1, sentence1);
    }

    printf("\n---------------------------------------\n");

    // strcspn calculates the index of the first place where any of the characters in one string are found in the other string.

    const char *str1 = "These functions are very useful";
    const char *str2 = "maybe";    // characters to search
    int value;

    value = strcspn(str1, str2);

    printf("Index value of character : %d", value);  // return 2 because e is second index character.


    // strpbrk : searches its first string for the first occurrence of any character in its second string.
    const char *string1 = "English speaking and writing";
    const char *string2 = "sky";

    // printf("string2 caharacters appears first : %s", *strpbrk(string1, string2));  >> did not work
    printf("%s\"%s\"\n'%c'%s\n\"%s\"\n", "Of the characters in ", string2,*strpbrk(string1, string2), " appears earliest in ", string1);

    printf("\n------------------------------------------\n");

    // strrchr : searches for the last occurrence of the specified character in a string.

    const char *string1_1 = "I have a lot of apples";
    int ch = 'e';    // character for search

    // printf("\n%c is in the : %s", ch, strrchr(string1_1, ch));
    printf("%s \n %s '%c' \"%s\" \n","string1 beginning with the", "last occurrence of character", ch, strrchr(string1_1, ch));  // if you want to use two "" sign, you should use like this \"\".
    // aslinda burada sondaki e harfini bulup e'den sonrasini ekrana yazdırır.


    printf("\n-----------------------------------------------\n");

    // strspn : Returns the length of the portion of the str1 parameter, consisting of characters not included in the str2 parameter.
    // string2 dizisi içindeki karakterlerin string1 dizisi içindeki sayısı:

    const char *string_2_1 = "Watermelon";
    const char *string_2_2 = "Wat";   // buyuk harflere dikkat et.
    int length;
    length = strspn(string_2_1, string_2_2);

    printf("\n%s\n%s%d\n", "The length of string1 ", "Contain character from string 2 : ", length);

    printf("\n---------------------------------------------\n");

    // strstr : searches for the first occurrence of its second string
    char string_3_1[] = "Helloworld";
    char string_3_2[] = "lo";

    printf("%s%s\n%s%s\n%s%s", "String1 : ", string_3_1, "String2 : ", string_3_2, "string in character string : ", strstr(string_3_1, string_3_2)); 
    // 2.stringdeki kelimeyi 1.de bulur ve devamını yazdırır.

    printf("\n------------------------------------------------\n");

    // strtok : it break a string into a series of tokens

    // Memory Functions
    // memcpy : Copies n bytes from the object pointed to by string2 into the object pointed to by s1

    char string_4_1[20];
    char string_4_2[] = "Helloworld";

    memcpy(string_4_1, string_4_2, 20);

    printf("%s%s", "String2 copied into String1 and String 1 : ", string_4_1);

    printf("\n-----------------------------------------------------\n");

    // memmove 

    char string_5_1[] = "How are you";

    //printf("%s %s \n%s %s" "Before memmove : ", string_5_1, "After memmove : ", memmove(string_5_1, &string_5_1[4], 15));
    // kitapta memmove'un basina char * getirmiş.
    //  memmove to copy the last 10 bytes of array str into the first 10 bytes of array str.
    printf("Before memmove : %s", string_5_1);
    printf("\nAfter memmove : %s", memmove(string_5_1, &string_5_1[3], 10)); 

    printf("\n------------------------------------------------\n");

    // memcmp : compares the specified number of bytes
    char string_6_1[] = "ABCDEFG";
    char string_6_2[] = "ABZDYFG";

    printf("%s%d\n%s%d\n", "memcmp(string_6_1, string_6_2, 3) : ", memcmp(string_6_1, string_6_2, 3), "memcmp(string_6_1, string_6_2, 6) : ", memcmp(string_6_1, string_6_2, 6));
    // degerler buyuk sayi cikti.
    //string1 memory content is less than string2 memory content. (-23)

    printf("\n------------------------------------------------\n");

    // memchr :  searches for the first occurrence of a byte
    char string_7[] = "I am learning C programming";

    printf("%s%s\n", "After string7 character 'g' :  ", memchr(string_7, 'g', 20));  // displayed 'g C programming'

    // memset 
    char string_8[] = "ABCDEFGHJK";
    printf("%s%s\n", "After memset : ", memset(string_8, 'Y', 5));  // displayed 'YYYYYFGHJK'

    // strerror

    printf("\n%s\n", strerror(3));  // displayed 'No such process'


    return 0;
}