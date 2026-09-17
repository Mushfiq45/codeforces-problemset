#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int arr[3];
  int avg, output = 0;

  cin >> arr[0] >> arr[1] >> arr[2];

  sort(arr, arr +3);

  avg = arr[1];

  output = abs((arr[0] - avg)) + abs((arr[1] - avg)) + abs((arr[2] - avg));

  cout << output;

  return 0;
}