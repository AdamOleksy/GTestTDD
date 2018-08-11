#include "../inc/IsBalanced.hpp"

bool IsBalanced::IsItBalanced(std::string str){
    if(str == "()")
        return true;
    else
        return false;
}
