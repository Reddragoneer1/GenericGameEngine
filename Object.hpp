//
//  Object.hpp
//  GenericGameEngine
//
//  Created by Nathanael Huh on 1/19/19.
//  Copyright © 2019 Nathanael Huh. All rights reserved.
//

#ifndef Object_hpp
#define Object_hpp

#include <stdio.h>
#include <string>

using FString = std::string;

class Object
{
private:
    FString name;
    FString properties;
    int strengthStat;
    int intelligenceStat;
    int staminaStat;
};

#endif /* Object_hpp */
