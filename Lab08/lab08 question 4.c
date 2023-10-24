// Programmer Emman Abrar
//This is a password program that takes an input password from a user and then determines whether or not it is correct
//24/10/23


#include <stdio.h>
#include<string.h>
//declaring function
int main()
{
//character array to store input 
    char password[1000];
//comparision array for password length
    char storedPassword[] = "Secure123";
   
    printf("Enter password\n");
    scanf(" %s", &password);
 //check for password length
 
    if(strlen(password) >= 8){
        if (strcmp(password, storedPassword) == 0){
            printf("Login Successful. WELCOME!");
        }//end if 
        else{
            printf("Login Failed. Incorrect Password\n");
        }//end else
    }//end if
    else
    {
        printf("Password must be atleast 8 characters");
    }//end else
    return 0;
}//end main
