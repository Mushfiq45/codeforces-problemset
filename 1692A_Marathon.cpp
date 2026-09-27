#include<iostream>
using namespace std;

int main(){

  int a,b,c,d;
  int n;
  
  
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int output = 0;

    cin >> a >> b >> c >> d;

    if (a < b)
    {
      output++;
    }
    if (a < c)
    {
      output++;
    }
    if (a < d)
    {
      output++;
    }

    cout << output << endl;

  }
  
  

  return 0;
}