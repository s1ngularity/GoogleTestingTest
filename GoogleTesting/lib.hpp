//
//  lib.hpp
//  GoogleTesting
//
//  Created by Alex Vaskov on 20.04.17.
//  Copyright © 2017 AV_Colloque. All rights reserved.
//

#ifndef lib_h
#define lib_h

#include <string>

namespace Syvsow {
class Lib {
private:
    bool state = false;
    std::string name = "Sample Text";
    
    
public:
    bool get_state();
    void set_name(std::string);
    const std::string& get_name();
    bool make_request() const;
};
}

#endif /* lib_h */
