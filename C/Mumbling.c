#include <string.h>
#include <stdlib.h>

int sum(int number) {
  if(number == 0)
    return 0;
  
  return number + sum(number-1);
}

char *accum(const char *source) {
  int length = strlen(source);
  int temp_length = length;
  int pos = 0;
  int temp_pos = 0;
  
  length = length - 1 + sum(length);
  char *result = malloc(length);
  
  
  for(int i = 0; i < temp_length; i++) {
    pos = i + 1;
    for(int j = 0; j < pos; j++) {
      if(j == 0) {
        if(source[i] > 90)
          result[temp_pos] = source[i] - 32;
        else
          result[temp_pos] = source[i];
        
        temp_pos += 1;
      }
      else
        {
          if(source[i] <= 90)
          result[temp_pos] = source[i] + 32;
        else
          result[temp_pos] = source[i];

        temp_pos += 1;
      }
    }
    result[temp_pos] = '-';
    temp_pos += 1;
  }
  
  
  result[length] = '\0';
  
  return result;
}
