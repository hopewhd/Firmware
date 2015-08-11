#pragma once

#include "base.h"
#include <time.h>

#define ERROR_SHOW_INTERVAL 5000

namespace modes
{

class Error : public Base
{
public:
    Error();

    virtual int getTimeout();
    virtual void listenForEvents(bool awaitMask[]);
    virtual Base* doEvent(int orbId);

    virtual bool onError(int errorCode);
protected:
    bool isErrorShowed;
    int lastErrorCode;
    time_t lastErrorTime;
    static int lastErrorStamp;
};

}

