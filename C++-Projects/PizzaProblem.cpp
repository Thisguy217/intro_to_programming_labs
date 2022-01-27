#include<iostream>
#include<cmath>
using namespace std;

int main() {
   //Variables and Constant Declaration
   const double PI = 3.14159265;
   const double LARGE_PRICE = 14.68;
   const double MEDIUM_PRICE = 11.48;
   const double SMALL_PRICE = 7.28;
   const double DIAMETER_LARGE = 20.0;
   const double DIAMETER_MEDIUM = 16.0;
   const double DIAMETER_SMALL = 12.0;
   const int LARGE_PEOPLE_FED = 7;
   const int MEDIUM_PEOPLE_FED = 3;
   const int SMALL_PEOPLE_FED = 1;
   int totalPeople;
   int tip;
   int largePizzas;
   int mediumPizzas;
   int smallPizzas;
   double tipPercentage;
   double largeArea;
   double mediumArea;
   double smallArea;
   double totalArea;
   double squareInchesPerPerson;
   double pizzaCost;
   double totalCost;
   
   
   //Calculate Pizzas (Part 1)
   cout << "Please enter how many guests to order for: ";
   cin >> totalPeople;
   cout << endl;
   
   largePizzas = totalPeople / LARGE_PEOPLE_FED;
   mediumPizzas = (totalPeople % LARGE_PEOPLE_FED) / MEDIUM_PEOPLE_FED;
   smallPizzas = ((totalPeople % LARGE_PEOPLE_FED) % MEDIUM_PEOPLE_FED) / SMALL_PEOPLE_FED;
   cout << largePizzas << " large pizzas, ";
   cout << mediumPizzas << " medium pizzas, and ";
   cout << smallPizzas << " small pizzas will be needed." << endl;
   cout << endl;
   
   //Compute amount of food per person (Part 2)
   largeArea = largePizzas * (PI * (DIAMETER_LARGE / 2) * (DIAMETER_LARGE / 2));
   mediumArea = mediumPizzas * (PI * (DIAMETER_MEDIUM / 2) * (DIAMETER_MEDIUM / 2));
   smallArea = smallPizzas * (PI * (DIAMETER_SMALL / 2) * (DIAMETER_SMALL / 2));
   totalArea = largeArea + mediumArea + smallArea;
   squareInchesPerPerson = totalArea / totalPeople;
   cout << "A total of " << totalArea << " square inches of pizza will be ordered (";
   cout << squareInchesPerPerson << " per guest)." << endl;
   cout << endl;
   
   //Compute total as well as tip! (Part 3)
   cout << "Please enter the tip as a percentage (i.e. 10 means 10%): ";
   cin >> tip;
   cout << endl;
   
   pizzaCost = largePizzas * LARGE_PRICE + mediumPizzas * MEDIUM_PRICE + smallPizzas * SMALL_PRICE;
   tipPercentage = static_cast<double>(tip) / 100.0;
   totalCost = tipPercentage * pizzaCost + pizzaCost;
   
   cout << "The total cost of the event will be: $" << round(totalCost);
   cout << endl;
   
   return 0;
}