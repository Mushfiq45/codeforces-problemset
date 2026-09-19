#include<iostream>
using namespace std;

int main(){

  int n,t;
  int crime = 0;
  int police = 0;
  int output = 0;
  cin >> n;  

  for (int i = 0; i < n; i++)
  {
    cin >> t;

    if (t >= 1)
    {
      police += t;
    }
    else if(t == -1){
      crime ++;
    }
    if (police >= 1 && t == -1)
    {
      crime--;
      police--;
    }
    else if (police == 0 && t == -1)
    {
      output++;
    }
    
  }
  
  cout << output;

  return 0; 
}