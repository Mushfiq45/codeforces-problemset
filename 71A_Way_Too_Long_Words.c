#include<stdio.h>
#include <string.h>

int main(){

  int attempts = 0;

  scanf("%d", &attempts);

  for (int i = 0; i < attempts; i++)
  {
    char words[100] = "\0";

    scanf("%s", &words);

    int length = strlen(words);

    if (length <= 10)
    {
      printf("%s\n", words);
    }
    
  else{
    printf("%c%d%c\n", words[0], length - 2, words[length-1]);
  }
  }
  

  return 0;
}