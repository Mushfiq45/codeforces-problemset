#include<stdio.h>

int main(){

  int input, input2;
  int output=0;

  scanf("%d", &input);

  for (int i = 0; i < input; i++)
  {
    scanf("%d ", &input2);

     if (input2 == 1)
  {
    printf("HARD");
    return 0;
  }
  }
    printf("EASY");

  return 0;
}