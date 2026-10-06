#include <iostream>
using namespace std;

int main() {
    int n, t[100], max = 0, output = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      cin >> t[i];

      if (max < t[i])
      {
        max = t[i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      output += max - t[i];
    }

    cout << output;
    
    return 0;
}

