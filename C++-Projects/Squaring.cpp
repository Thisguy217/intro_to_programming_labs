#include <iostream>
using namespace std;

int main() {
   int userNum = 0;
   int userOtherNum = 0;

   cout << "Enter integer: ";
   cin  >> userNum;
   cout << endl;
   cout << "You entered: " << userNum << endl;
   
   cout << userNum << " squared is " << userNum * userNum << endl; 
   cout << "And " << userNum << " cubed is " << userNum * userNum * userNum << "!!" << endl;
   
   cout << "Enter another integer: ";
   cin >> userOtherNum;
   cout << endl;
   cout << userNum << " + " << userOtherNum << " is " << userNum+userOtherNum << endl;
   cout << userNum << " * " << userOtherNum << " is " << userNum*userOtherNum << endl;

   return 0;
}