#include<iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){

  int n;
  string letters;

  bool seen[26] = {};

  cin >> n;
  cin >> letters;
  transform(letters.begin(), letters.end(), letters.begin(), ::tolower);

  for (int i = 0; i < n; i++)
  {
    seen[letters[i] - 'a'] = true;
  }

  for (int i = 0; i < 26; i++)
  {
    if (seen[i] == false)
    {
      cout << "NO";
      return 0;
    }
   
  }
  
  cout << "YES";

  return 0;
}