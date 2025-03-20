#include <stdio.h>
#include <stdlib.h>

int main(){
  int i = 1;
  for(i=1; i<=100; i++){
    int mult=0; // multiple verifier: 0 for none, 1 for 3, 2 for 5 and 3 for both
    if(i%3 == 0){
      mult = 1;
    }
    if(i%5 == 0){
      mult += 2;
    }
    if(mult==0){
      printf("%d\n", i);
      continue;
    }
    if(mult==1){
      printf("Foo\n");
      continue;
    }
    if(mult==2){
      printf("Baa\n");
    }
    if(mult==3){
      printf("FooBaa\n");
    }
  }
  return 0;
}
