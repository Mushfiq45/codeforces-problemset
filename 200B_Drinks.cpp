#include<iostream>
#include<iomanip>

int main(){

  double input = 0;
  double input2 = 0;
  double total = 0;

  std::cin >> input;

  for (int i = 0; i < input; i++)
  {
    std::cin >> input2;
    std::cout << " "; 

    total += input2;
  }

  double output = total/input;

  std::cout << std::fixed << std::setprecision(12) << output << std::endl;
  

  return 0;
}