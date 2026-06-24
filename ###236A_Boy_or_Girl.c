#include <stdio.h>
#include <string.h>
int main() {
  
    int indx;
    int seen[26] = {0};
    char input[101];
    int output = 0;

    scanf("%s", input);

    int length = strlen(input);
    
    for(int i = 0; i<length; i++){
        indx = input[i] - 'a';
        seen[indx] = 1;
    }
    
    for(int i = 0; i<26; i++){
        output = output + seen[i];
    }

    
    if(output % 2 ==0){
        printf("CHAT WITH HER");
    }
    else{
        printf("IGNORE HIM");
    }
    return 0;
}