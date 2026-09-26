#include<iostream>
#include<vector>
using namespace std;

int main(){

  int n;
  int number;
  int k;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> number;

     int digit = 0;
     int place = 1;

     vector<int> answer;

    while (number != 0)
    {
      k = number % 10;

    if (k > 0)
    {
      digit++;
      answer.push_back(k*place);
    }

    place = place*10;  
    number = number / 10;
    }

     cout << digit << endl;

        for (int j = 0; j < digit ; j++)
        {
            cout << answer[j] << " ";
        }

        cout << endl;

  }

   return 0;

}
