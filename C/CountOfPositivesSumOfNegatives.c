#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
{
  
  if(count == 0)
    return;
  // Please store the positives count in the memory, pointed to
  // by the positivesCount parameter.
  
  // Please store the negatives sum in the memory, pointed to
  // by the negativesSum parameter.
  
  while(count--){
    if(values[count] < 0)
      *negativesSum += values[count];
    if (values[count] > 0)
      *positivesCount += 1;
  }

}  
