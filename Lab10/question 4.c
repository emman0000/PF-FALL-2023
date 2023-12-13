//Programmer Emman Ali
//Lab 10 question 4 
//Develop a C program that takes a sentence as input and uses pointer arithmetic to reverse each word in the sentence while keeping the words in their original order. Print the modified sentence.


#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
//end function
//main function 
int main() {
    char sentence[1000];

    // Input the sentence
    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character if present
    size_t len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    // Tokenize the sentence and reverse each word
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        reverse(token, token + strlen(token) - 1);
        printf("%s ", token);
        token = strtok(NULL, " ");
    }

    return 0;
}//end main 
