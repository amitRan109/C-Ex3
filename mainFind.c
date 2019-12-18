
#include <stdio.h>
#include "txtfind.h"
#include <string.h>


int main(){

char arr[WORD];
getword(arr);
char ch;
//printf("%s\n",arr);
scanf(" %c", &ch);
//printf("%c\n", ch);
if(ch=='a'){
print_lines(arr);
}
if(ch=='b'){
print_similar_words(arr);
}




}