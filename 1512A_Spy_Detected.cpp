#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
   
  for (int i = 0; i < n; i++)
  {
    int t, number;
    cin >> t;
    int arr[t];

    for (int j = 0; j < t; j++)
    {
      cin >> arr[j];
    }

    for (int k = 0; k < t; k++)
    {
       if (arr[0] == arr[1])
       {
         if (arr[k] != arr[0])
        {
          cout << k+1 << endl;
        }
       }

       else{
        if (arr[k] != arr[2])
        {
          cout << k+1 << endl;
        }
        
       }
    
    }
    
  }
  
  return 0;
}