#include<stdio.h>

int main(){

  int input = 0;
  int kthPlace = 0;
  int output = 0;
  

  scanf("%d %d", &input, &kthPlace);

  int array[input];

  for (int i = 0; i < input; i++)
  {
    scanf("%d", &array[i]);
  }
   
    for (int i = 0; i < input; i++)
  {
    ;

    if (array[kthPlace - 1] <= array[i] && array[i] > 0)
    {
      output++; 
    }
  }

  printf("%d", output);

  return 0;
}