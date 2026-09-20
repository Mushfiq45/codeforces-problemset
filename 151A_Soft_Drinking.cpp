  #include<iostream>
  using namespace std;

  int main(){

    int n, k, l, c, d, p, nl, np;
    int possible, ttlLimes, salt;
    int output = 0;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    possible = (k*l)/nl;
    ttlLimes = (c*d)/1;
    salt = p/np;

    output = min(min(possible, ttlLimes), salt);

    cout << output / n;

    return 0;
  }