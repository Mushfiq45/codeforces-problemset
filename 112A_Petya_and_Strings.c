#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){

  char input[101]= "\0";
  char input2[101]= "\0";
  int convert = 0;
  int convert2 = 0;

  scanf("%s", &input);
  scanf("%s", &input2);

  int length = strlen(input);

  for (int i = 0; i < length; i++)
  {
    
  input[i] = tolower(input[i]);
  input2[i] = tolower(input2[i]);
    convert = input[i];
    convert2 = input2[i];

      if (convert < convert2)
   {
    printf("-1\n");
    return 0;
   }
   
    else if (convert > convert2)
    {
      printf("1\n");
      return 0;
    }
     
  }
   printf("0\n");

  return 0;
}