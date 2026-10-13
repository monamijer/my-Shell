#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char buffer[101];
  while(1){
  printf("$:");
  fgets(buffer, sizeof(buffer), stdin);
  size_t len = strlen(buffer);
  if(len > 0 && buffer[len - 1] == '\n'){
	buffer[len - 1] = '\0';
  }
  if(strcmp(buffer, "exit")==0) break;
  size_t i = 0;
  int spaces = 0;
  while (buffer[i] != '\0'){
	if(buffer[i]== ' '){
	  spaces++;
	}
	printf("%c", buffer[i]);
	i++;
  }
  printf("\nNumber of spaces: %d\n", spaces);
  }
  return 0;
  
}
