#include<iostream>
#include<string>
using namespace std;

int main(){

  int n;
  cin >> n;
  string a = "I hate ";
  string b = "I love ";
  string c = "";
  for (int i = 1; i <= n; i++)
  {
    if(i%2 != 0){
      c.append(a);
      if(i != n){
        c.append("that ");
      }
    }
    else{
      c.append(b);
            if(i != n){
        c.append("that ");
      }
    }
  }

  cout << c << "it";  


  return 0;
}