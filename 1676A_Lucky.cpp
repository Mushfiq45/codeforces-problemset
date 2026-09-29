#include<iostream>
using namespace std;  

int main(){

  int n;
  string t;
  
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> t;

    if ((t[0]-'0' + t[1]-'0' + t[2]-'0') == t[3]-'0' + t[4]-'0' + t[5]-'0')
    {
      cout << "YES" << '\n';
    }
    else{
      cout << "NO" << endl;
    }
  }
  

  return 0;
}