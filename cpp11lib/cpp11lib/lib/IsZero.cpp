//
//  IsZero.cpp
//  cpp11lib
//
//  Created by pebble8888 on 2015/09/04.
//  Copyright (c) 2015 pebble8888. All rights reserved.
//

#include "IsZero.h"
#include <limits>
#include <cmath>

bool IsZero(float val)
{
    return std::fabs(val) < std::numeric_limits<float>::epsilon();
}
