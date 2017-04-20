//
//  lib.cpp
//  GoogleTesting
//
//  Created by Alex Vaskov on 20.04.17.
//  Copyright © 2017 AV_Colloque. All rights reserved.
//

#include <iostream>
#include "lib.hpp"

using namespace Syvsow;

bool Lib::get_state() {
    std::clog << "Someone's trying to get my state!\n";
    std::clog << "It's DONALD TRUMP\n";
    return state;
}

void Lib::set_name(std::string t_name) {
    name = t_name;
}

const std::string &Lib::get_name() {
    return name;
}

bool Lib::make_request() const {
    std::clog << "LIB: working hard...\n";
    return true;
}

