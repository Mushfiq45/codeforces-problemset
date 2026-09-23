  #include<iostream>
  using namespace std;

  int main(){

    int n;
    int left = 0;
    int s = 0, d = 0;
    cin >> n;
    int t[n], right = n-1;

    for (int i = 0; i < n; i++)
    {
      cin >> t[i];
    }

    while(left <= right)
    {
      if (t[left] > t[right])
      {
        s += t[left];
        left++; 
      }
      else{
        s+= t[right];
        right--;
      }
      
      if(left <= right){
      if (t[left] > t[right])
      {
        d += t[left];
        left++;
      }
      else{
        d += t[right];
        right--;
      }
      }
    }
    
    
    cout << s << " " << d;

    return 0;
  }