#include<iostream>

int main(){

  int input;
  int fill;
  int limit;
  int output = 0;

  std::cin >> input;

  for (int i = 0; i < input; i++)
  {
    std::cin >> fill >> limit;

    if ((fill + 2) <= limit)
    {
      output++;
    }
    
  }
  
    std::cout << output;

  return 0;
}