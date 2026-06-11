#include<stdio.h>
#include<math.h>

int main(){

  int steps = 0;

  scanf("%d", &steps);

  if (steps%5 >0)
  {
    steps/=5;
    steps++;
    printf("%d", steps);
  }
 else{ 
steps/=5;

  printf("%d", steps);
 }


  return 0;
}