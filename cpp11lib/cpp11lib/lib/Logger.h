//
//  Logger.h
//  cpp11lib
//
//  Created by pebble8888 on 2015/09/04.
//  Copyright (c) 2015 pebble8888. All rights reserved.
//

#ifndef __Logger__
#define __Logger__

#ifdef __cplusplus
extern "C" {
#endif

#if defined(DEBUG)
#define DEBUG_LOG(fmt,...) Logger( "%s [Line:%d] " fmt, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
void Logger(const char* fmt, ...);
#else
#define DEBUG_LOG(fmt,...)
#endif
    

#ifdef __cplusplus
}
#endif

#endif /* defined(__Logger__) */
