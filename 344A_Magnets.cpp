#include<iostream>

int main(){

  int input;
  int previous;
  int current;
  int output = 1;

  std::cin >> input;
  std::cin >> previous;

  for (int i = 1; i < input; i++)
  {
    std::cin >> current;

    if (previous != current)
    {
      output++;
    }
    
    previous = current;

  }
  
    std::cout << output;

  return 0 ;
}