#include <string.h>
#include <stdio.h>
#include "fizzbuzz.h"

char* fizzbuzz(uint16_t n)
{
  static char buf[128];

  switch(n%15){
    case 0:
      strcpy(buf,"FizzBuzz");
      break;
    case 10:
    case 5:
      strcpy(buf,"Buzz");
      break;
    case 12:
    case 9:
    case 6:
    case 3:
      strcpy(buf,"Fizz");
      break;
    default:
      sprintf(buf,"%d",n);
  }
  return buf;
}
