#include <stdio.h>

int main(void)
{
  int i;
  for(i=0; i<100; i++){
    switch(i%15){
      case 0:
        puts("FizzBuzz");
        break;
      case 10:
      case 5:
        puts("Buzz");
        break;
      case 12:
      case 9:
      case 6:
      case 3:
        puts("Fizz");
        break;
      default:
        printf("%d\n",i);
    }
  }
  return 0;
}
