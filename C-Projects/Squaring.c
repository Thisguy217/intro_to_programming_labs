#include <stdio.h>

int main() {
   int userNum = 0;
   int userOtherNum = 0;
   int squaringNum;
   int cubingNum;

   printf("Enter integer: ");
   scanf("%i",userNum);
   printf("You entered: %i", userNum);
   
   squaringNum = userNum * userNum;
   printf("%i square is squared is %i", userNum, squaringNum); 
   cubingNum = userNum * squaringNum;
   printf("And %i cubed is %i!!", userNum, cubingNum);
    
   printf("Enter another integer: ");
   scanf("%i", userOtherNum);
   printf("%i + %i is %i", userNum, userOtherNum, userNum + userOtherNum);
   printf("%i * %i is %i", userNum, userOtherNum, userNum * userOtherNum);
   
   return 0;
}