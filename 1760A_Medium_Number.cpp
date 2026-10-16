#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n;
  
  cin >> n;

  for (int i = 0; i < n; i++)
  {
     int t[3];
    for (int j = 0; j <= 2; j++)
    {
      cin >> t[j]; 
    }
    
    sort(t,t+3);
    
    cout << t[1] << endl;
  } 

  return 0;
}