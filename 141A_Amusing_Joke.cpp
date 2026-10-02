#include<iostream>
using namespace std;

int main(){

  string input;
  string input2;
  string input3;
  int arr[26] = {};
  int arr2[26] = {};
  bool check = false;

  cin >> input;
  cin >> input2;
  cin >> input3;

  string total = input + input2;

  for (int i = 0; i < total.length(); i++)
  {
   arr[total[i] - 'A']++;
  }
  for (int i = 0; i < input3.length(); i++)
  {
   arr2[input3[i] - 'A']++;
  }
  
  for (int i = 0; i < 26; i++)
  {
    if (arr[i] == arr2[i])
    {
      check = true;
    }
    else{
      cout << "NO";
      return 0;
    }
  }

  if (check = true)
  {
    cout << "YES";
  }

  return 0;
}