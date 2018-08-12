#include "../inc/IsBalanced.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

bool IsBalanced::IsItBalanced(std::string str){
    std::vector<char> characters;
    std::string copy = str;

    if(str.length() == 1 || str.length() == 0 || str.length()%2 != 0 )
        return false;

    while(copy.length() > 0){
    size_t pos = 0;
        pos = copy.find("()");
        if(pos < copy.length()-1){
            copy.erase(pos, 2);
            continue;
        }
        pos = copy.find("{}");
        if(pos < copy.length()-1){
            copy.erase(pos, 2);
            continue;
        }

        pos = copy.find("[]");
        if(pos < copy.length()-1){
            copy.erase(pos, 2);
            continue;
        }

        return false;

    }

    return true;
}

