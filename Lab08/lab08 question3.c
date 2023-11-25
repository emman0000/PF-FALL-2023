//Programmer Emman Ali
//Program takes input string from the user and searches for a specific character as 'a' or 'b' within the input and then displays the total count
//28/10/23


#include<stdio.h>
#include<string.h>
int main() {

	int i, count=0;
	char str[100], ch;
//taking input from user whilst using strings
	printf("Enter some text\n ");
	gets(str);
//Displaying original user input for reference
printf("This is your sentence:");
	printf("\n %s",str);
	printf("\nWhich character are you trying to find? :  ");
	scanf("%c",&ch);
	for(i=0;str[i] != '\0';i++) {
		if(str[i]==ch) {
			count++;
		}//end if
	}//end for loop
	printf("\n your character (ascii) %d has been used %d times",ch ,count);
}//end main
