#include <Mouse.h>

void setup()
{
  Mouse.begin();
}

void loop()
{
  while(true) { 
    delay(5000);
    Mouse.move(1,0,0);
    delay(100);
    Mouse.move(-1,0,0);
  }
}
