#include<iostream>
using namespace std;

int main(){

  int a, b;

  cin >> a >> b;

  for (int i = 1; i < a+1; i++)
  { 
    for (int j = 0; j < b; j++)
    {
          if (i % 2 != 0)
      {
        cout << "#";
      }

      else if(i % 4 == 0){
        if (j == 0)
         cout << "#";
         else
        cout << ".";
      }

       else if(i % 4 != 0){
        if (j == b-1)
         cout << "#";
         else
        cout << ".";
      }

    }
      cout << '\n';
    
  }
   return 0;
}