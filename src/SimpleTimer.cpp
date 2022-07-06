#include "SimpleTimer.h"

SimpleTimer::SimpleTimer () {}
SimpleTimer::SimpleTimer (int delayTime) {
    this->setDelayTime( delayTime );
}

void SimpleTimer::setDelayTime (int delayTime) {
    this->_delayTime = delayTime;
}

bool SimpleTimer::expired () {
    int timeSinceLast = (millis() - this->_startTime);
    if(timeSinceLast >= this->_delayTime) {
        this->reset();
        return true;
    }
    return false;
}

void SimpleTimer::reset () {
    this->_startTime = millis();
}