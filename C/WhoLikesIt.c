#include <stdlib.h>
#include <string.h>
#include <stdio.h>


// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

char *likes(size_t n, const char *const names[n]) {
    //  <----  hajime!
  switch(n) {
      case 0: {
        int arr_size = strlen("no one likes this") + 1;
        char *result = calloc(arr_size , sizeof(char));
        strcpy(result, "no one likes this\0");
        return result;
      }
      
      case 1: {
        int arr_size = snprintf(0, 0, "%s likes this", names[0]);
        printf("%d\n", arr_size);
        char *result = calloc(arr_size + 1, sizeof(char));
        snprintf(result, arr_size + 1, "%s likes this", names[0]);
        printf("%s\n", result);
        return result;
      }
      
      case 2: {
        int arr_size = snprintf(0, 0, "%s and %s like this", names[0], names[1]);
        printf("%d\n", arr_size);
        char *result = calloc(arr_size + 1, sizeof(char));
        snprintf(result, arr_size + 1, "%s and %s like this", names[0], names[1]);
        printf("%s\n", result);
        return result;
      }
      
      case 3: {
        int arr_size = snprintf(0, 0, "%s, %s and %s like this", names[0], names[1], names[2]);
        printf("%d\n", arr_size);
        char *result = calloc(arr_size + 1, sizeof(char));
        snprintf(result, arr_size + 1, "%s, %s and %s like this", names[0], names[1], names[2]);
        printf("%s\n", result);
        return result;
      }
      
      default: {
        int arr_size = snprintf(0, 0, "%s, %s and %d others like this", names[0], names[1], n - 2);
        printf("%d\n", arr_size);
        char *result = calloc(arr_size + 1, sizeof(char));
        snprintf(result, arr_size + 1, "%s, %s and %d others like this", names[0], names[1], n - 2);
        printf("%s\n", result);
        return result;
      }
      
  }
