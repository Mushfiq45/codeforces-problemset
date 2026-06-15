#include<stdio.h>
#include<math.h>
int main(){

  int k; //bananas cost
  int n; //number of bananas
  int w; //soldier money
  int total = 0;;

  scanf("%d %d %d", &k, &w, &n);

  for (int i = 1; i <= n; i++)
  {
    total = total+(i * k); 
  }
    if (1 <= k, w <= 1000, 0 <= n <= pow(10, 9) && total >= w)
    {
       w = total-w;
       printf("%d", w);
    }

    else
    {
      printf("0");
    }
  return 0;
}