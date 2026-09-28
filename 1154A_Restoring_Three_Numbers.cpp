#include<iostream>
using namespace std;

int main(){

    int a, b, c, d;
    int maximum = 0;

    cin >> a >> b >> c >> d;

    maximum = max(max(max(a, b), c), d);

    int arr[4] = {a, b, c, d};

    for (int i = 3; i >= 0; i--)
    {
      if (maximum != arr[i])
      {
        cout << maximum - arr[i] << " ";
      }
      
    }
    
  return 0;
}