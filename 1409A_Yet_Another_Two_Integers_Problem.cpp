#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int n;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int a,b;
    int x = 0, y = 0;
    int output = 0;

    cin >> a >> b;

    if (a > b)
    {
      x = a-b;
      output = ceil(x / 10.0);
    }
    else if (b > a)
    {
      x = b-a;
      output = ceil(x / 10.0);
    }
    
    cout << output << endl;
  }
  

  return 0;
}