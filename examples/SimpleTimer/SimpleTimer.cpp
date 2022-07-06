#include <Arduino.h>
#include "SimpleTimer.h"

// 30 seconds
SimpleTimer timer (30000);

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (timer.expired()) {
        Serial.println ("30 seconds passed.");
    }
}
