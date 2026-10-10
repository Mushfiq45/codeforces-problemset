#include<iostream>
using namespace std;

int main(){

  int n;
  int a, b, c;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x = 0, y = 0,z = 0;

    cin >> a >> b >> c;

    x = a+b;
    y = b+c;
    z = a+c;

      if (x >= 10 || y >= 10 || z >= 10)
    {
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
        
  }
  
  return 0;
}