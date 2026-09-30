#include<iostream>
using namespace std;

int main(){

  int n;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int t;
    int output = 0;
    int maximum = 0;
    cin >> t;
    int arr[t];

    for (int j = 0; j < t; j++)
    {
      cin >> arr[j];

      if (arr[j] == 0)
      {
        output++;
      }
     
      if (output > maximum)
        {
          maximum = output;
        }

      else if(arr[j] == 1){
        output = 0;
      }
      
    }
     
     cout << maximum << endl;
  }
  

  return 0;
}


