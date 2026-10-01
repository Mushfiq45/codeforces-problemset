#include<iostream>
using namespace std;

int main(){

  int n;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int t, number;

    cin >> t >> number;
    bool check = false;
    int arr[t];

    for (int j = 0; j < t; j++)
    {
        cin >> arr[j];

      if (arr[j] == number)
      {
        check = true;
      }
    }

    if (check == true)
    {
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    } 
  }
  
  return 0;
}