//Programmer Emman Abrar Ali
//This program runs a match-stick game with the computer and user
//There are 21 matchsticks and the user has to pick 1,2,3 or 4 every turn
//Player who picks the last matchstick looses
//Spoiler: The computer always wins!

#include <stdio.h>
int main() { 
    //declaring variables 
//Total matches will be 21 and will decrement from there.
    int playerPicks, TotalMatchesLeft = 21 ,machinePicks, count=1;
    printf ( "\"The game of matchsticks has begun\"\n\n" );
    //start of loop to print matchstciks represented by 0s
    for ( count = 1; count <= TotalMatchesLeft ; count++ ) {
        printf ("I ");
    }//end for
    printf ( "\n" );
//Game Play Information 
printf("There are 21 matches to pick from");
 printf ( "\n" );
printf("Pick only 1,2,3 or 4 numbers at one time");
//start of while loop for matches check
    while ( TotalMatchesLeft != 0 ) { 
    
    //asking the user to input matches
    printf ( "Enter how many matches you want to pick: " );  
    scanf ( "%d",&playerPicks );
    if (playerPicks<0 || playerPicks>4) { 
        printf ("invalid input\n"); 
    }//end if
    else {
  //storing matches left after player's pick
    TotalMatchesLeft -= playerPicks;
    //subtracting 5 to ensure thatthe computer wins
    machinePicks = 5-playerPicks;
    //output matches picked by the computer
    printf ( "Computer takes: %d\n\n" , machinePicks ); 
    //calculating leftover matches
    TotalMatchesLeft -= machinePicks;
    //beginning of loop to print leftover matches
    for (count = 0 ; count < TotalMatchesLeft ; count++ ) {
        printf ( "I " );
    }//end for 
    printf ( "\n\n" );
        //test condition to check is matches left equal 1 so it breaks the loop 
        if(TotalMatchesLeft == 1) {
            break;
        }//end if 
    }//end else
    }//end while
        //output the winner and looser
      printf ("\nThe winner is the Computer");
    return 0;
} //end main
