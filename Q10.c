#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  if(argc <2){
    printf("Supply the string as a command line argument. Finished!\n");
    return -1;
  }
  int counter=0, i=0;
  while(argv[1][i] != '\0'){
    counter = counter + 1;
    i = i + 1;
  }
  return counter;
}
