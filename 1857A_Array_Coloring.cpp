#include<iostream>
using namespace std;

int main(){

  int n;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int t, arr;
    int total = 0;
    cin >> t;


    for (int j = 0; j < t; j++)
    {
      cin >> arr;
      total += arr;
    }

    if (total % 2 == 0)
    {
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
    
  }
  
  return 0;
}