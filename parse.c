#include <string.h>
#include <stdio.h>


char ** parse_args ( char * line){
  char *args[5];
  int i = 0;
  while(line){
    args[i] = strsep(&line, " ");
    printf("str %d: %s, /tline: %s", i, args[i], line);
    i++;
  }
}


int main(){
  parse_args("a b c d");
}
