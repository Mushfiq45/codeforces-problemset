  #include<iostream>
  using namespace std;

  int main(){

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
      int a,b;
      bool check = false;

      cin >> a >> b;
      int arr[a];

      for (int j = 0; j < a; j++)
      {
        cin >> arr[j];
      }

      for (int k = 0; k < a-1; k++)
      {
        if(b == 1 && arr[k] > arr[k+1]){
          check = true;
        } 
      }
      
        if (check == true)
        {
          cout << "NO"<< endl;
        }
          
        else if (b >= 1)
        {
          cout << "YES" << endl;
        }
      }
    
    return 0;
  }