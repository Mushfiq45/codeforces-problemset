#include<iostream>
using namespace std;

int main(){

  int k,r;
  int x = 1;
  bool check = false;

  cin >> k >> r;

do
{
  if ((k * x) % 10 == r)
    {
      cout << x;
      check = true;
      break;
    }
    else if (k * x % 10 == 0)
    {
      cout << x;
      check = true;
      break;
    }
    else{
      x++;
    }
} while (check == false);


  return 0;
}