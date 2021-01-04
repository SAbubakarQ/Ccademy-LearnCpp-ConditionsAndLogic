//Bismillah-AbubakarQ

#include <iostream>
using namespace std;

int main() {

  double weight = 0.0;
  int planet = 0;
  //int Y = 1;


  cout << "Enter Earth weight: ";
  cin >> weight;
  cout << endl;
  
  cout << "Enter planet you wish to fight on: \n";
  cin >> planet;
  cout << endl;

  switch (planet) 
  {
  case 1 :
    cout << "You will fight on Mercury\n";
    cout << "Your weight will be: ";
    cout << weight * 0.38;
    cout << endl;
    break;
  case 2 :
    cout << "You will fight on Venus\n";
    cout << "Your weight will be: ";
    cout << weight * 0.91;
    cout << endl;
    break;
  case 3 :
    cout << "You will fight on Mars\n";
    cout << "Your weight will be: ";
    cout << weight * 0.38;
    cout << endl;
    break;
  case 4 :
    cout << "You will fight on Jupiter\n";
    cout << "Your weight will be: ";
    cout << weight * 2.34;
    cout << endl;
    break;
  case 5 :
    cout << "You will fight on Saturn\n";
    cout << "Your weight will be: ";
    cout << weight * 1.06;
    cout << endl;
    break;
  case 6 :
    cout << "You will fight on Uranus\n";
    cout << "Your weight will be: ";
    cout << weight * 0.92;
    cout << endl;
    break;
  case 7 :
    cout << "You will fight on Neptune\n";
    cout << "Your weight will be: ";
    cout << weight * 1.19;
    cout << endl;
    break;
  default:
    cout << "You will be on Earth\n";
    cout << "Your weight will be: ";
    cout << weight;
    cout << endl;
    break;
  }
  
  
}
