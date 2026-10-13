#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int t;
    bool check = false;

    cin >> t;
    int arr[t];
    for (int j = 0; j < t; j++)
    {
      cin >> arr[j];
    }

    sort(arr, arr + t);

    for (int k = 0; k < t-1; k++)
    {
      if (arr[k+1] - arr[k] != 1 && arr[k+1] - arr[k] != 0)
      {
        check = true;
      }    
    }
    
      if (check == true)
      {
        cout << "NO" << endl;
      }
      else{
        cout << "YES" << endl;
      }

  }
  

  return 0;
}