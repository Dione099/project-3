#include <iostream>
using namespace std;

int main(){
  //put two numbers needed to add
 int num1=247;
  int num2=129;

 std:: cout<< "What is the sum" << num1 << " + " << num2 << "? " << endl;
 
  //user would now solve problem
  std::cout<<"Press any key to see the answer" << std::endl;
    std::cin.get();
  //display the answer
  int answer = num1 + num2;
  std::cout <<"The correct answer is " << answer << endl;

    return 0;
}