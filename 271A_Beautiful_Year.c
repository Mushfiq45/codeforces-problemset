#include<stdio.h>
#include<string.h>

int main(){

  char input[1001];
  int year = 0;

  scanf("%d", &year);

  while (1)
  {
    year++;
  
  sprintf(input, "%d", year);

  int length = strlen(input);
  int giganiga = 0;

  for (int i = 0; i < length; i++)
  {
    for (int j = i+1; j < length; j++)
    {
      if (input[i] == input[j])
      {
        giganiga = 1;
      }
    }
  }

  if (giganiga == 0)
  {
    printf("%s", input);
    break;
  }
  }  

  return 0;
}