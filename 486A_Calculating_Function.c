#include<stdio.h>

int main(){

  long long input;
  long long output = 0;

  scanf("%lld", &input);

  if (input % 2 == 0)
  {
    printf("%lld", input / 2);
  }
  
  else{
    printf("%lld", -(input/2+1));
  }

  return 0;
}