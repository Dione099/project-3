#include <iostream>
using namespace std;

int main(){
  //the original amounts of each ingredient.
const double sugarPer48 = 1.5;
const double butterPer48 = 1.0;
const double flourPer48 = 2.75;
const int cookiesPerBatch = 48;

  int desiredcookies;
  cout << "How many cookies do you want to make:";
  cin >> desiredcookies;
  static_cast<double>(desiredcookies) / cookiesPerBatch;cookiesPerBatch;
  double sugarNeeded = (sugarPer48 / cookiesPerBatch) * desiredcookies;
  double butterNeeded = (butterPer48 / cookiesPerBatch) * desiredcookies;
  double flourNeeded = (flourPer48 / cookiesPerBatch) * desiredcookies;

  cout << "To make " << desiredcookies << " cookies, you will need:\n";
  cout << sugarNeeded << " cups of sugar\n";
  cout << butterNeeded << " cups of butter\n";
  cout << flourNeeded << " cups of flour\n";
  return 0;
}
