#include <Arduino.h>

#ifndef SimpleTimer_h
#define SimpleTimer_h

class SimpleTimer {
    private:
        int _delayTime  = 500;
        long _startTime = 0;
    public:
        SimpleTimer ();
        SimpleTimer (int delayTime);
        void setDelayTime (int delayTime);
        void reset ();
        bool expired ();
};

#endif