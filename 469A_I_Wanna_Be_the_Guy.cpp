#include <iostream>
using namespace std;

int main() {
    
    int n,x,y,p,q;
    
    cin >> n;
   
    bool check[n+1] = {};

    cin >> p;
    
    for(int i = 0; i < p; i++){
         cin >> x;
        check[x] = true;
    }

    cin >> q;
    
     for(int i = 0; i < q; i++){
         cin >> y;
        check[y] = true;
    }
    
    for(int i = 1; i<=n; i++){
        if(check[i] == false){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}