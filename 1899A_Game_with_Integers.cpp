#include<iostream>
using namespace std;

int main(){

  int n,t;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> t;

    if (t % 3 == 0)
    {
      cout << "Second" << endl;
    }
    else{
      cout << "First" << endl;
    }
    
  }
  


  return 0;
}