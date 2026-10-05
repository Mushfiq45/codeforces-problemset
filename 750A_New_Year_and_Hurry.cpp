#include<iostream>
using namespace std;

int main(){

  int n, k;
  int diff;
  int i = 1;

  cin >> n >> k;

  diff = 240 - k;

  while (5*i <= diff && i <= n)
  {
    diff = diff - 5*i;
   
      i++;
    
  }

    cout << i-1;

  return 0;
}