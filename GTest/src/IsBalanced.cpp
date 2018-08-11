#include "../inc/IsBalanced.hpp"

bool IsBalanced::IsItBalanced(std::string str){
    if(str == "()" || str == "{}" || str == "[]" || str.length()%2 == 0)
        return true;
    else
        return false;
}
