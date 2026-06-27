#include<stdio.h>
#include<stdlib.h>

int main(){

  int input[5][5];
  int output = 0;
  int x = 0;
  int y = 0;

  for(int i = 0; i < 5; i++){  //rows
    for(int j = 0; j < 5; j++){ //columns 
      scanf("%d ", &input[i][j]); 

       if (input[i][j] == 1)
       {
          x = i;
          y = j;

          x = abs(x-2);
          y = abs(y-2);
        
         output = x+y;
       }
    }  
      printf("\n"); 
  } 

    printf("%d", output);

  return 0;
}