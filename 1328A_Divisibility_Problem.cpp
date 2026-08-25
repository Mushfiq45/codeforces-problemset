#include<iostream>
#include<cmath>

int main(){

  double input;
  double a;
  double b;
  double x;
  int output;

  std::cin >> input;

  for (int i = 0; i < input; i++)
  {
    std::cin >> a >> b;

    x = ceil(a/b);

    output = (b * x) - a;

    std::cout << output << '\n';
  }
  

  return 0;
}