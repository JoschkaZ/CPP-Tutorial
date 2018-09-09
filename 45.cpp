#include <iostream>

using namespace std;



int main() {
  int age = 21; // C-like initialization
  int age2 (21); // Constructor initialization
  int age3 {21}; // C++11 list initialization syntax

  int age4;
  cout << age4; // uses whatever is in the memory location right now

  return 0;
}
