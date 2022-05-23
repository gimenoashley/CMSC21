#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> /* toupper, isalpha */

//scans the inputs
void scan_word(int *occurrences[26]){
    char c;
    while ((c=getchar()) != '\n'){
        if (isalpha(c)){
            *occurrences[toupper(c) - 'A']++;
        }
    }
}

//changes into pointers then compares the two arrays
bool is_anagram(int *occurrences1[26], int *occurrences2[26]){
    int i = 0, same=1;
    for (i; i < 26; i++){
        if (occurrences1[i] != occurrences2[i]) {
            same=0;
            break;
        }
    }
    return same;
}

int main(void) {

    int i, same = 1, *occurrences1[26] = {0}, *occurrences2[26] = {0};
    char c;

    printf("Enter first word: ");
    scan_word(&occurrences1);
    printf("Enter second word: ");
    scan_word(&occurrences2);


    same = is_anagram(&occurrences1, &occurrences2);
    if (same) {
        printf("The words are anagrams.\n");
        return 0;
    }
    else{
        printf("The words are not anagrams.\n");
        return 0;
    }
    return 0;
}
