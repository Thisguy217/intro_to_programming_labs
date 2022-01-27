#include<stdio.h>
#include<math.h>

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
   printf("Please enter how many guests to order for: ");
   scanf("%i", &totalPeople);
   
   largePizzas = totalPeople / LARGE_PEOPLE_FED;
   mediumPizzas = (totalPeople % LARGE_PEOPLE_FED) / MEDIUM_PEOPLE_FED;
   smallPizzas = ((totalPeople % LARGE_PEOPLE_FED) % MEDIUM_PEOPLE_FED) / SMALL_PEOPLE_FED;
   printf("%i large pizzas, ", largePizzas);
   printf("%i medium pizzas, and ", mediumPizzas);
   printf("%i small pizzas will be needed.\n", smallPizzas);
   
   //Compute amount of food per person (Part 2)
   largeArea = largePizzas * (PI * (DIAMETER_LARGE / 2) * (DIAMETER_LARGE / 2));
   mediumArea = mediumPizzas * (PI * (DIAMETER_MEDIUM / 2) * (DIAMETER_MEDIUM / 2));
   smallArea = smallPizzas * (PI * (DIAMETER_SMALL / 2) * (DIAMETER_SMALL / 2));
   totalArea = largeArea + mediumArea + smallArea;
   squareInchesPerPerson = totalArea / totalPeople;
   printf("A total of %lf square inches of pizza will be ordered (", totalArea);
   printf("%lf per guest).\n", squareInchesPerPerson);
   
   //Compute total as well as tip! (Part 3)
   printf("Please enter the tip as a percentage (i.e. 10 means 10%%): ");
   scanf("%i", &tip);
   
   pizzaCost = largePizzas * LARGE_PRICE + mediumPizzas * MEDIUM_PRICE + smallPizzas * SMALL_PRICE;
   tipPercentage = tip / 100.0;
   totalCost = tipPercentage * pizzaCost + pizzaCost;
   
   printf("The total cost of the event will be: $%.2lf\n", ceil(totalCost));
  
   return 0;
}