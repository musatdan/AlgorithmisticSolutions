#include <stddef.h>
#include <inttypes.h>

void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
  // write your answer to the pre-allocated digits array
  *length_out = 0; // report the number of digits
  
  do{
    digits[(*length_out)++] = n % 10;
    n /= 10;
  }
  while(n);
}
