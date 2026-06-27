#include<stdio.h>
#include<ctype.h>

int main(){

  char input[1001];

  scanf("%s", input);

  input[0] = toupper(input[0]);

  printf("%s", input);

  return 0;
}