#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

  char input[101];
  int output = 0;

  scanf("%s", &input);
  int length = strlen(input);

  for (int i = 0; i < length; i++)
  {
    if (input[i] == '4' || input[i]== '7')
    {
      output++;
    }
    
  }
  
  if (output==4 || output==7)
  {
    printf("YES");
  }
  else{
    printf("NO");
  }
  

  return 0;
}