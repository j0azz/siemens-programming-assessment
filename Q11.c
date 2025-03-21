#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
  char *str=argv[1];
  if(argc <2){
    printf("Supply the string as a command line argument. Finished!\n");
    return -1;
  }

  int left = 0, right = strlen(str) - 1;
  
  while (left < right) {
      str[left] ^= argv[1][right];
      str[right] ^= str[left];
      str[left] ^= str[right];
      left++;
      right--;
  }
  printf("%s", str);
  return 0;
}
