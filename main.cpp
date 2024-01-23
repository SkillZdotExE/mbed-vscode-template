#include "mbed.h"

int main(void)
{
  while (true)
  {
    printf("Hello World!");
    ThisThread::sleep_for(1s);
  }
}