#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > piesel;

    auto it = people.rbegin();
    
    for(it; it!=people.rend(); ++it){
        it->birthday();
        
        if(it->isMonster())
        {
            piesel.push_back('n');
        }
        else
        {
           piesel.push_back('y');
        }
        
    };
    return piesel;


    return {};
}
