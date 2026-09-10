#include<iostream>
using namespace std;

int main(){

  int input;
  int a,b,c,d,e;

  cin >> input;

  a = input / 100;
  b = a + ((input % 100) / 20);
  c = b + ((input % 20) / 10);
  d = c + ((input % 10) / 5); 
  e = d + ((input % 5) / 1); 

  cout << e;

  return 0;
}

