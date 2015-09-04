//
//  Logger.cpp
//  cpp11lib
//
//  Created by pebble8888 on 2015/09/04.
//  Copyright (c) 2015 pebble8888. All rights reserved.
//

#include "Logger.h"
#include <stdarg.h>
#include <stdio.h>
#include <chrono>

#if defined(DEBUG)

using namespace std::chrono;

static void PrintDateTimeWithMilliSeconds(void)
{
    const system_clock::time_point now = system_clock::now();
    system_clock::duration tp = now.time_since_epoch();
    tp -= duration_cast<seconds>(tp);
    const time_t tt = system_clock::to_time_t(now);
    const tm t = *localtime(&tt);
    printf("%04u-%02u-%02u %02u:%02u:%02u.%03u",
                t.tm_year + 1900,
                t.tm_mon + 1,
                t.tm_mday, 
                t.tm_hour, 
                t.tm_min, 
                t.tm_sec,
                static_cast<unsigned>(tp/ milliseconds(1)));
}

void Logger(const char* fmt, ...)
{
    va_list arglist;
    va_start(arglist, fmt);
    va_end(arglist);
    
    PrintDateTimeWithMilliSeconds();
    printf(" ");

    vprintf(fmt, arglist);
}

#endif /* defined(DEBUG) */
