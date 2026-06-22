#include<stdio.h>
#include<string.h>

int main(){

  char input[101];
  int output = 0;
  int final = 0;

  scanf("%s", &input);
   int length = strlen(input);


  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)   
    {
      if (input[i] == input[j])
      {
        output++;
      }
    }
    
  }

  output = (output - length) / 2;
  final = length - output;

  if (final % 2 == 0)
  {
    printf("CHAT WITH HER!");
  }
  else{
     printf("IGNORE HIM!");
  }

  return 0;
}