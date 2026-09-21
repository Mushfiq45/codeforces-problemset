#include<iostream>
using namespace std;

int main(){

  int n, total = 0;
  string t;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> t;

    total = (t[0] - '0') + (t[1] - '0');

    cout << total << endl;
  }
  


  return 0;
}