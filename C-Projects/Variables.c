#include<stdio.h>

int main() {
   int    userInt = 0;
   double userDouble = 0.0;
   char userChar;
   char userString[100];
   
   printf("Enter character: ");
   scanf("%c", &userChar);

   printf("Enter integer: ");
   scanf("%i", &userInt);
   
   printf("Enter double: ");
   scanf("%lf", &userDouble);
   
   printf("Enter string: ");
   scanf("%s", &userString);
   
   printf("%i %lf %c %s\n", userInt, userDouble, userChar, userString);
   
   printf("%s %c %lf %i\n", userString, userChar, userDouble, userInt);
   
   printf("%lf cast to an integer is %i.\n", userDouble, (int)userDouble);

   return 0;
}