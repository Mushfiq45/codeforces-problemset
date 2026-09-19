#include<iostream>
using namespace std;

int main(){

  int n;
  string input;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string word;
    cin >> input; 

  for (int j = 0; j < input.length(); j++)
  {
    input[j] = tolower(input[j]);

    word += input[j]; 
  }
     if (word == "yes")
    {
      cout << "YES" << endl;
    }

    else{
      cout << "NO" << endl;
    }
  }
  return 0;
}