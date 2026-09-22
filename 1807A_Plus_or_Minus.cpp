#include<iostream>
using namespace std;

int main(){

  int numbers[3];
  int n;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> numbers[0] >> numbers[1] >> numbers[2];

    if (numbers[0] + numbers[1] == numbers[2])
    {
      cout << "+" << endl;
    }

    else if (numbers[0] - numbers[1] == numbers[2]){
      cout << "-" << endl;
    }
  }
  


  return 0;
}