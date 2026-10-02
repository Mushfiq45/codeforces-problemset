#include<iostream>
using namespace std;

int main(){

  int n;
  int output = 0;

  cin >> n;

  int arrA[n];
  int arrB[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arrA[i];
    cin >> arrB[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arrA[i] == arrB[j])
    {
      output++;
    }
    }
       
  }
  
    cout << output;

  return 0;
}