#include<iostream>
using namespace std;

int main(){

  int n,t;
  string sequence;

  cin >> n >> t;
  cin >> sequence;

  for (int i = 0; i < t; i++)
  {
    for (int j = 0; j < sequence.size(); j++)
    {
      if (sequence[j] == 'B' && sequence[j+1] == 'G')
      {
        sequence[j] = 'G';
        sequence[j+1] = 'B';
        j++;
      }
      
    }
    
  }
  
  cout << sequence;

  return 0;
}