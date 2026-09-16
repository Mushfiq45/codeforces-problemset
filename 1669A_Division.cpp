#include<iostream>
using namespace std;

int main(){

  int n, t;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> t;

    if (t >= 1900)
    {
      cout << "Division 1" << endl;
    }

    else if (t >= 1600)
    {
      cout << "Division 2" << endl;
    }

    else if (t >= 1400)
    {
      cout << "Division 3" << endl;
    }
    else{
      cout << "Division 4" << endl;
    }
    
    
  }
  


  return 0;
}