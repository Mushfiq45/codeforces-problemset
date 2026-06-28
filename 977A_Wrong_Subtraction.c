#include<stdio.h>

int main(){

  int input;
  int input2;

  scanf("%d %d", &input, &input2);

  for (int i = 0; i < input2; i++)
  {
    if (input%10 == 0)
    {
      input = input / 10;
    }
    
    else{
      input = input - 1;
    }
  }

  printf("%d ", input);

  return 0;
}