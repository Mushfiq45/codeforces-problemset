#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

  char input[101];
  int capital = 0;
  int small = 0;

  scanf("%s", input);
  int length = strlen(input);

  for (int i = 0; i < length; i++)
  {
    if (input[i] < 97)
    {
      capital++;
    }
    else{
      small++;
    }
  }

    if (capital > small)
    {for (int i = 0; i < length; i++)
    {
      input[i] = toupper(input[i]);
    }
    }
    
    else{for (int i = 0; i < length; i++)
    {
      input[i] = tolower(input[i]);
    }
    }
    
    printf("%s", input);

  return 0;
}