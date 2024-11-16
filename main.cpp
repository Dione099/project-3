#include <iostream>
using namespace std;

int main(){
  //initiaize the random number generator
 sran(time(0)); 

  //generate two random numbers between 1 and 999
  int num1 = rand() % 10 + 1;
  int num2 = rand() % 10 + 1;

  cout<< "What is " << num1 << " + " << num2 << "? " << endl;

  //user would now solve problem
  cout<<"Press any key to see the answer" << endl;"
    cin.get();
  //display the answer
  int answer = num1 + num2;
  cout <<"The correct answer is " << answer << endl;"

    return 0;
}