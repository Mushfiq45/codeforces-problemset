#include<iostream>
using namespace std;

int main(){

  string a;
  int n,value, sum = 0;

  cin >> n;
  
  for (int i = 0; i < n; i++)
  {
    cin >> a;

      if (a == "Icosahedron")
    {
      value = 20;
    }

    else if(a == "Cube"){
      value = 6;
    }

    else if(a == "Tetrahedron"){
      value = 4;
    }

    else if(a == "Dodecahedron"){
      value = 12;
    }

    else if(a == "Octahedron"){
      value = 8;
    }
    sum = sum + value;

  }
  
  cout << sum;
  

  return 0;
}