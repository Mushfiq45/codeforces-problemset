#include<stdio.h>

int main(){

  int problems = 0;
  int g1 , g2 , g3;
  int total = 0;
  int output = 0;

  scanf("%d", &problems);

  for(int i=0; i<problems; i++){
    scanf(" %d %d %d", &g1, &g2, &g3);
    total=g1+g2+g3;
    
      if (total >= 2)
  {
    output++;
  }
  }

  printf("%d", output);

  return 0;
}