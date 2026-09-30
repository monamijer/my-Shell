#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char buffer[101];
  while(1){
  printf("S:");
  fgets(buffer, sizeof(buffer), stdin);
  if(strcmp(buffer, "exit\n")==0) break;
  printf("you type %s", buffer);
  }
  return 0;
  
}
