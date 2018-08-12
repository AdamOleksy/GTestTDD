#include "../inc/IsBalanced.hpp"

bool IsBalanced::IsItBalanced(std::string str){
    if(str.length()%2 == 0)
        if(str == "()" || str == "{}" || str == "[]" || str == "{[]}" ||
               str == "{{}}" || str == "[[]]" || str == "[{}]" || str == "{()}" ||
                str == "()()" || str == "(())")
            return true;

    else
        return false;
}
