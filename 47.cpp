#include <iostream>
#include <climits>


using namespace std;

int main() {


  char middle_initial {'J'};
  cout << "My middle initial is " << middle_initial << endl;

  unsigned short exam_score{55};

  int countries_represented{65};
  long people_in_florida{20610000};

  long people_on_earth0 = 7000000000; //this leads to overflow
  long long people_on_earth{7000000000};   //this would catch an error

  cout << people_on_earth0 << endl;
  cout << people_on_earth << endl;

  float car_payment{5315.26};
  double pi{3.14159265358};
  long double large_amount{2.7e200};

  bool game_over{false};


  cout << sizeof(int) << endl;
  cout << sizeof(long double);



}
