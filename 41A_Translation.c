#include<stdio.h>
#include<string.h>

int main(){

  char input[101];
  char input2[101];
  

  scanf("%s", input);
  scanf("%s", input2);
  int length = strlen(input);
  char hello[length];

  for (int i = 0; i < length; i++)
  {
    hello[i] = input[length - 1 - i];
  }
  hello[length] = '\0';
  
  if (strcmp(hello, input2) == 0)
  {
    printf("YES");
  }
  else{
    printf("NO");
  }
  

  return 0;
}