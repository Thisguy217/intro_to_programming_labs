#include<stdio.h>
#include<math.h>

int main() {
   double wallHeight = 0.0;
   double wallWidth = 0.0;
   double wallArea = 0.0;
   const double GALLON_CONVERSION = 350.0;
   double paintNeeded = 0.0;
   
   printf("Enter wall height (feet): ");
   scanf("%lf", &wallHeight);
   printf("Enter wall width (feet): ");
   scanf("%lf", &wallWidth);
   
   wallArea = wallHeight * wallWidth;
   printf("Wall area: %lf square feet\n", wallArea);
   
   paintNeeded = wallArea / GALLON_CONVERSION;
   printf("Paint needed: %lf gallons\n", paintNeeded);

   printf("Cans needed: %i can(s)\n", ceil(paintNeeded));

   return 0;
}