#include <iostream>
#include <map>
#include <unordered_map>
#include <iterator>
using namespace std;

/*
8. You have a Wishlist of Items on amazon and an amount of 
money you are going to spend. Return a pair (or list of pairs) 
of items that will take up the full amount you have to spend. 
Ex. Amount: $10 Wishlist: Book $5, Movie1 $10.... 

Proposed Solution:
1.Take in how much you have to spend.
2.Take in items and cost until they user is done.
3.Return PAIR of items for cost.
*/

string solution (int amountToSpend, map<string, double> &amazonItems){
	double total = amountToSpend;
   double amountLeftOver;



   //figure out iterator to create index for hash map
   iterator it = amazonItems.begin();
	
   
   
   
   cout << "So it looks like you have $" << total << " to spend."<< endl;
   //look through map to find what you can spend
   //do the math for each item and find an alternative to add to it !only two items needed
   
   //for every item within amazonItems do:
   for (int i = 0;i < amazonItems.size();i++){
     cout << "total = " << total << endl;
     //subtract item
   }
   //amountLeftOver = total - 
}

int main(){
   double amountToSpend = 30.00;
   string itemName[100];
   double itemCost[100] = {0.0};
   map<string, double> amazonItems{
      {"book", 3.00},
      {"pencil", 0.5},
      {"calculator", 4.00},
      {"ruler", 1.5},
      {"computer", 300.00},
   };



   /*
      //Vector
      vector<string, double> amazonItems{
      {"book", 3.00},
      {"pencil", 0.5},
      {"calculator", 4.00},
      {"ruler", 1.5},
      {"computer", 300.00},
   };



      //map

   */

   solution(amountToSpend, amazonItems);
   return 0;
}
	
