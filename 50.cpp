#include <iostream>

using namespace std;

int main() {

  int number_of_rooms{0};
  const double price_per_rooms{32.5};
  cin >> number_of_rooms;





  cout << "Price: " << price_per_rooms << endl;
  cout << "Cost: " << price_per_rooms*number_of_rooms;

  return 0;
}


// character literals are enclosed in ''
// string literals are enclosed in ""
