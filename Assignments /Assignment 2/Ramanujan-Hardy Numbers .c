// Programmer Emman Ali
//This code helps find all the Ramanujan-Hardy Numbers less than n^3
#include <stdio.h>
#include <math.h>
int main() {
  int x ;
  printf("Enter any real number: ", x);
  scanf("%d", &x);
  printf("The following are numbers know as Ramanujan-Hardy numbers:");
  printf("\n");
  printf("These are numbers upto the power of three ");
  
  
  
  for( int i=1;i<=x*x; i++){
    for(int j= i+1; j<=x*x; j++){
        int n1= p(i, 3) + p(j,3);
       for(int a=i+1; a<=x*x; a++){
           for(int b = a+1; b<= x*x; b++){
               int n2 = p(a,3) + p(b,3);
               if (n1 == n2){
                   printf("%d = %d^3 + %d^3 is the same as %d^3 + %d^3" n1,i,j,a,b);
               }//end if 
           }//end for loop for b
       }//end for loop a
    }//end loop for j
      
      

      
  }//end for loop i
  

    return 0;
}//end main
