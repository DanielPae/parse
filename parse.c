#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char ** parse_args ( char * line ){
  char ** args = (char **) malloc(sizeof(char *) * 6);
  int i = 0;
  while(line){
    args[i] = strsep(&line, " ");
    printf("str %d: %s,    line: %s\n", i, args[i], line);
    i++;
  }
  args[i] = NULL;
  return args;
}


int main(){
  char temp[100] = "ls -a -l";
  char** args = parse_args(temp);
  execvp("ls", args);
}
