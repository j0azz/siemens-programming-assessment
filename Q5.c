#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ConcatRemove(char *s, char *t, int k_value){
  // to print yes or not we need to make the following calculation and check the inequation
  // k >= (ls-c)+(lt-c)
  // where c is the number of consecutive characters that s and t have in common since the beginning
  // if c=ls or c=lt we must have k>=2c
  // returning 0 means no, returning 1 means yes
  int ls=strlen(s), lt=strlen(t), k=k_value, c=0;
  int i=0, l=lt; 
  if(lt>ls){
    l=ls;
  }
  for(i=0; i<l; i++){
    if(s[i]==t[i]){
      c = c+1;
    }
  }
  int result = (ls-c)+(lt-c);
  if(result==0){
    if(k >= 2*c){
      return 1;
    }
    else {
      return 0;
    }
  }
  if(result<=k){
    return 1;
  }
  else {
    return 0;
  }
}

char* assert(int res){
  if(res==1){
    return "yes";
  }
  if(res==0){
    return "no";
  }
}

int main(){
  printf("UNIT TESTING for ConcatRemove(s,t,k)\n\n");

  //must print yes
  // Example 1
  // bla bla bla bla
  // blablabcde
  // 8
  // yes
  if(ConcatRemove("blablablabla", "blablabcde", 8)==1){
    printf("Passed test 1: (blablablabla, blablabcde, 8)\n");
  }
  else{
    printf("Test 1 failed: (blablablabla, blablabcde, 8)\n");
  }
  //
  // Example 2
  // tab
  // tab
  // 7
  // yes
  if(ConcatRemove("tab", "tab", 7)==1){
    printf("Passed test 2: (tab, tab, 7)\n");
  }
  else{
    printf("Test 2 failed: (tab, tab, 7)\n");
  }
  
  //same examples with wrong numbers
  //must print no
  if(ConcatRemove("blablablabla", "blablabcde", 3)==0){
    printf("Passed test 3: (blablablabla, blablabcde, 3)\n");
  }
  else{
    printf("Test 3 failed: (blablablabla, blablabcde, 3)\n");
  }
  if(ConcatRemove("tab", "tab", 2)==0){
    printf("Passed test 4: (tab, tab, 2)\n");
  }
  else{
    printf("Test 4 failed: (tab, tab, 2)\n");
  }
  
}
