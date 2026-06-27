#include<stdio.h>

int main(){

  int input = 0;
  int output = 0;

  scanf("%d", &input);
  char colors[input];

  scanf("%s", colors);

  for (int i = 0; i < input; i++)
  {
    if (colors[i] == colors[i+1])
    {
      output++;
    }
  }
  
  printf("%d", output);

  return 0;
}