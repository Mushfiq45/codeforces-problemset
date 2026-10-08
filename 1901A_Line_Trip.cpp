#include<iostream>
using namespace std;

int main(){

  int n, a, b;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;
    int arr[a];
    int max = 0;

    for (int j = 0; j < a; j++)
    {
      cin >> arr[j];
    }
    for (int k = 0; k < a-1; k++)
    {
       if (max < (arr[k+1] - arr[k]))
      {
        max = (arr[k+1] - arr[k]);
      }
    }  
     if (max < arr[0])
     {
       max = arr[0];
     }

     if (max < ((b-arr[a-1])*2))
    {
      max = ((b-arr[a-1])*2);
    }  

    cout << max << endl;

  }
  
  return 0;
}