#include<iostream>
using namespace std;

int main(){

  int n, give;
  int rec[101];

    cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> give;

    rec[give] = i;
  }
  for (int i = 1; i <= n; i++){
    cout << rec[i] << " ";
  }

  return 0;
}