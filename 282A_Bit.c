#include<stdio.h>
#include<string.h>

int main(){

  int input = 0;
  int output = 0;

  scanf("%d", &input);

  for (int i = 0; i < input; i++){

    char input2[4];
   
    scanf("%s", &input2);

    if (input2[1]=='+')
    {
      output ++;
    }

    else if (input2[1]=='-')
    {
      output --;
    }
  }
  
  printf("%d", output);

  return 0;
}