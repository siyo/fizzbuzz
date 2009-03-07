#include <stdio.h>
#include "fizzbuzz.h"

int main(void)
{
  uint16_t i;
  for(i=0; i<100; i++){
    puts(fizzbuzz(i));
  }
  return 0;
}
