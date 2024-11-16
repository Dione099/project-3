#include <iostream>
using namespace std;

int main(){
  //the original amounts of each ingredient.
const double sugarPer48 = 1.5;
const double butterPer48 = 1.0;
const double flourPer48 = 2.75;
const int cookiesPerBatch = 48;

  int desiredCookies;
  cout << "How many cookies do you want to make:";
  cin >> desiredCookies;
  
  double sugarNeeded = (sugarPer48 / cookiesPerBatch) * desiredCookies;
  double butterNeeded = (butterPer48 / cookiesPerBatch) * desiredCookies;
  double flourNeeded = (flourPer48 / cookiesPerBatch) * desiredCookies;

  cout << "To make " << desiredCookies << " cookies, you will need:\n";
  cout << sugarNeeded << " cups of sugar\n";
  cout << butterNeeded << " cups of butter\n";
  cout << flourNeeded << " cups of flour\n";
  return 0;
}
