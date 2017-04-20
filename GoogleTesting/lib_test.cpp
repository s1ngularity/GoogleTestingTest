//
//  lib_test.cpp
//  GoogleTesting
//
//  Created by Alex Vaskov on 20.04.17.
//  Copyright © 2017 AV_Colloque. All rights reserved.
//

#include <gtest/gtest.h>
#include "lib.hpp"

using namespace Syvsow;

TEST(Lib, GetState)
{
    Lib lib;
    ASSERT_FALSE(lib.get_state()) << "false expected!!!1";
}

TEST(Lib, GetName)
{
    Lib lib;
    ASSERT_STREQ(lib.get_name().c_str(), "Sample Text");
}

TEST(Lib, SetName)
{
    Lib lib;
    lib.set_name("test");
    ASSERT_STREQ(lib.get_name().c_str(), "test");
}

TEST(Lib, MakeRequest)
{
    Lib lib;
    ASSERT_TRUE(lib.make_request());
}
