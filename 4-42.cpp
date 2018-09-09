#include <iostream>

using namespace std;

int main(){

  cout << "Hello world!" << endl;
  cout << "Hello" << "world!" << endl;
  cout << "Hello\n" << "world!" << endl;

  int num1;
  int num2;
  double num3;

  cout << "Enter an integer pls..:" << endl;
  cin >> num1; // if two numbers are entered the second one will stay in the input stream and will be assigned to num2

  cout << "More integer pls..:" << endl;
  cin >> num2;

  cout << num1 <<" and " << num2 << endl;


  cout << "Enter an integer pls..:" << endl;
  cin >> num1;
  cout << "Enter a double pls..:" << endl;
  cin >> num3;

    cout << num1 <<" and " << num3;
}
