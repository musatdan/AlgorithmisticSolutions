#include <string.h>
#include <stdio.h>

//  do not allocate memory for the result
//  write to pre-allocated pointer *camel

void to_camel_case(const char *text, char *camel) {

    //  <----  hajime!
  int length = strlen(text);
  int pos = 0;
  
  if(length == 0) {
    *camel = '\0';
    return;
  }
  
  printf("%d\n", length);
  
  for(int i = 0; i < length; i++) {
    if(text[i] == '-' || text[i] == '_'){
      continue;
    }
    
    if(text[i - 1] == '-' || text[i - 1] == '_') {
      if(text[i] > 90) {
          camel[pos] = text[i] - 32;
      }
      else {
          camel[pos] = text[i];
      }
    }
    else {
      camel[pos] = text[i];
    }
    pos += 1;
  }
  
  printf("%s\n", camel);
}
