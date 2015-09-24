//
//  StopWatch.h
//  cpp11lib
//
//  Created by pebble8888 on 2015/09/24.
//  Copyright (c) 2015年 pebble8888. All rights reserved.
//

#ifndef __cpp11lib__StopWatch__
#define __cpp11lib__StopWatch__

#include <stdio.h>
#include <chrono>

class StopWatch {
public:
    StopWatch();
    void start(void);
    void stop(void);
    void print(FILE* fp);
private:
    std::chrono::system_clock::time_point start_;
    std::chrono::microseconds elapsed_microseconds_;
};

#endif /* defined(__cpp11lib__StopWatch__) */
