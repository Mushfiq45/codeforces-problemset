#include<stdio.h>

int main(){

  int m = 0;
  int n = 0;
  int area = 0;
  int pieces = 0;

  scanf("%d %d", &m, &n);

  if (1 <= m <= n <= 16)
  {
    area = m * n;
  pieces = area / 2;

  printf("%d", pieces);
  }
  

  return 0;
}