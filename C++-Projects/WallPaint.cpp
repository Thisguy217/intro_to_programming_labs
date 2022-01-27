#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
using namespace std;

int main() {
   double wallHeight = 0.0;
   double wallWidth = 0.0;
   double wallArea = 0.0;
   const double GALLON_CONVERSION = 350.0;
   double paintNeeded = 0.0;
   
   cout << "Enter wall height (feet): ";
   cin  >> wallHeight;
   cout << endl;
   
   cout << "Enter wall width (feet): ";
   cin >> wallWidth;
   cout << endl;
   
   // Calculate and output wall area
   wallArea = wallHeight * wallWidth;
   cout << "Wall area: " << wallArea << " square feet" << endl;
   
   paintNeeded = wallArea / GALLON_CONVERSION;
   cout << "Paint needed: " << paintNeeded << " gallons" << endl;

   // FIXME (3): Calculate and output the number of 1 gallon cans needed to paint the wall, rounded up to nearest integer
   cout << "Cans needed: " << ceil(paintNeeded) << " can(s)" << endl;

   return 0;
}