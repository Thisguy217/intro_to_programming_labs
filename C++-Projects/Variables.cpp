#include <iostream>
#include <string>      
using namespace std;

int main() {
   int    userInt = 0;
   double userDouble = 0.0;
   char userChar;
   string userString;
   
   cout << "Enter integer: ";
   cin  >> userInt;
   cout << endl;
   
   cout << "Enter double: ";
   cin >> userDouble;
   cout << endl;
   
   cout << "Enter character: ";
   cin >> userChar;
   cout << endl;
   
   cout << "Enter string: ";
   cin >> userString;
   cout << endl;
   
   cout << userInt << " " << userDouble << " " << userChar << " " << userString << endl;
   
   cout << userString << " " << userChar << " " << userDouble << " " << userInt << endl;
   
   cout << userDouble << " cast to an integer is " << static_cast<int>(userDouble) << endl;

   return 0;
}