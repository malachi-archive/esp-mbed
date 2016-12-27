#include "Mutex.h"
#include "FreeRTOS.h"

osStatus Mutex::lock(uint32_t millisec)
{
    // TOOD: reach out to freeRTOS mutex code
    return osStatus::osOK;
}


osStatus Mutex::unlock()
{
    // TOOD: reach out to freeRTOS mutex code
    return osStatus::osOK;
}
