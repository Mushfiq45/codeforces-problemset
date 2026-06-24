#include<stdio.h>
#include<string.h>

int main(){

  char input[101];

  scanf("%s", input);

  int length = strlen(input);

   for(int i = 0; i < length; i+=2){  
    for(int j = 0; j < length; j+=2){ 
     
     if (input[j] > input[i])
     {
      char change = input[i];
      input[i] = input[j];
      input[j] = change;
      
     }
     
    }  
    
  } 
printf("%s", input);
  return 0;
}