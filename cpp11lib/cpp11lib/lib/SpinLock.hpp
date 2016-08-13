//
//  SpinLock.hpp
//  cpp11lib
//
//  Copyright © 2016年 pebble8888. All rights reserved.
//

#ifndef SpinLock_hpp
#define SpinLock_hpp

#include <atomic>

class SpinLock
{
    std::atomic_flag lk = ATOMIC_FLAG_INIT;
public:
    void lock(void)
    {
        while(lk.test_and_set(std::memory_order_acquire));
    }
    void unlock(void)
    {
        lk.clear(std::memory_order_release);
    }
};

#endif /* SpinLock_hpp */
