#include<stdio.h>

int main(){

  int input, height;
  int input2;
  int output = 0;

  scanf("%d %d", &input, &height);

  for (int i = 0; i < input; i++)
  {
    scanf("%d ", &input2);

    if (input2 > height)
    {
      output++;
    }
  }
  
  input = input + output;
  printf("%d", input);

  return 0;
}