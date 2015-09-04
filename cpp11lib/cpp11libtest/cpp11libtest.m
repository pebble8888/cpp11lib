//
//  cpp11libtest.m
//  cpp11libtest
//
//  Created by pebble8888 on 2015/09/04.
//  Copyright (c) 2015 pebble8888. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <XCTest/XCTest.h>
#import "Logger.h"
#include <unistd.h>

static char FILEPATH[] = "/tmp/cpp11libtest.log"; 

@interface cpp11libtest : XCTestCase
{
    FILE* _fp;
}
@end

@implementation cpp11libtest

- (void)setUp {
    [super setUp];
    _fp = fopen(FILEPATH, "w");
    dup2(fileno(_fp), STDOUT_FILENO);
}

- (void)tearDown {
    [super tearDown];
}

- (void)testExample {
    
    DEBUG_LOG("abc[%d]\n", 5);
    usleep(2000);
    DEBUG_LOG("def[%d]\n", 5);
    DEBUG_LOG("ghi[%d]\n", 5);
    
    fflush(_fp);
    fclose(_fp);
    
    //NSError* error;
    //NSString *string = [NSString stringWithContentsOfFile:[NSString stringWithUTF8String:FILEPATH] encoding:NSUTF8StringEncoding error:&error];
    //XCTAssert([string isEqualToString:@""], @"%@", string);
}

@end
