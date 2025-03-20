#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
  // to print yes or not we need to make the following calculation and check the inequation
  // k >= (ls-c)+(lt-c)
  // where c is the number of consecutive characters that s and t have in common since the beginning
  if(argc<3){
    printf("Provide all the parameters at command line as stated:\n\t s t k\nFinished!");
    return 1;
  }
  int ls=strlen(argv[1]), lt=strlen(argv[2]), k=atoi(argv[3]), c=0;
  int i=0, l=lt; 
  if(lt>ls){
    l=ls;
  }
  for(i=0; i<l; i++){
    if(argv[1][i]==argv[2][i]){
      c = c+1;
    }
  }
  int result = (ls-c)+(lt-c);
  if(result==0){
    if(k >= 2*c){
      printf("yes");
    }
    else {
      printf("no");
    }
  }
  else {
    if(result<=k){
      printf("yes");
    }
    else {
      printf("no");
    }
  }
  return 0;
}
