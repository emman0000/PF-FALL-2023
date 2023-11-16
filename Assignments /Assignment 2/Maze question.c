//Programmer Emman Ali
//This is a simple maze game code
#include <stdio.h>
#include <stdbool.h>
//using ture and false statements in boolean to help navigate through the maze
bool slv(char arr[5][5], char temp[5][5], int m, int n, int x, int y){
    if (x,0 || y<0 || x>= m || y>= n || arr[x][y] == 'W' || temp[x][y] == '1')
    return false;
    temp [x][y] = '1';
    
    if (arr[x][y]== 'E')
    return true;
    
    if (slv(arr,temp, m, n, x+1, y ) || slv(arr, temp, m, n, x, y+1))
    return true;
    
    temp [x][y] = '0';
    return false;
    
}//end bool

int main() {
    
    
//the maze overview
 char  maze[5][5] = {
     {'S', 'O', 'O', 'W', 'W'},
     {'O', 'W', 'O', 'O', 'W'},
     {'O', 'O', 'O', 'W', 'O'},
     {'W', 'W', 'O', 'W', 'O'},
     {'W', 'W', 'O', 'E', 'W'},
     
     
     
     
     
 };//end maze matrix
 
 char temp[5][5];
 for (int i=0; i<5; i++){
     for(int j=0; j<5; j++){
         temp[i][j] = '0';
     }//end j loop
 }//end i loop

if (slv (maze, temp, 5, 5, 0, 0)) {
    printf("Route: ");
    for (int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if (temp[i][j] == '1'){
                printf("(%d, %d)" ,i ,j);
            }//end if 
        }//end j loop
    }//end i loop
    
     printf("\n");
     printf("\n");
}//end if slv

else {
    printf("\nThis is a dead end mate.");
}//end else
    return 0;
}//end main
