#include "catch.hpp"
#include <string>

#include "../src/BSTLEAF.h"
#include "../src/BSTROOT.h"
#include "../src/BSTRAND.h"
#include "../src/AVL.h"

bool compare(const std::string &lhs, const std::string &rhs) {
    return lhs < rhs;
}

bool equals_function(const std::string &lhs, const std::string &rhs) {
    return lhs == rhs;
}

SCENARIO("BONUS: Group 2") {
    GIVEN("BSTLEAF") {
        WHEN("A normal map is used") {
            THEN("The interface is correct") {
                using non_const_map = cop3530::BSTLEAF<std::string,const int, compare, equals_function>;     
                non_const_map map;           
                non_const_map::iterator begin_iter = map.begin();
                non_const_map::iterator end_iter = map.end();
            }
        }
    
        WHEN("A const map is used") {
            THEN("The interface is correct") {
                using const_map = cop3530::BSTLEAF<std::string,const int, compare, equals_function>;
                const_map map;  
                const_map::const_iterator begin_iter = map.begin();
                const_map::const_iterator end_iter = map.end();
            }
        }
    }

    GIVEN("BSTROOT") {
        WHEN("A normal map is used") {
            THEN("The interface is correct") {
                using non_const_map = cop3530::BSTROOT<std::string,const int, compare, equals_function>;     
                non_const_map map;           
                non_const_map::iterator begin_iter = map.begin();
                non_const_map::iterator end_iter = map.end();
            }
        }
    
        WHEN("A const map is used") {
            THEN("The interface is correct") {
                using const_map = cop3530::BSTROOT<std::string,const int, compare, equals_function>;
                const_map map;  
                const_map::const_iterator begin_iter = map.begin();
                const_map::const_iterator end_iter = map.end();
            }
        }
    }

    GIVEN("BSTRAND") {
        WHEN("A normal map is used") {
            THEN("The interface is correct") {
                using non_const_map = cop3530::BSTRAND<std::string,const int, compare, equals_function>;     
                non_const_map map;           
                non_const_map::iterator begin_iter = map.begin();
                non_const_map::iterator end_iter = map.end();
            }
        }
    
        WHEN("A const map is used") {
            THEN("The interface is correct") {
                using const_map = cop3530::BSTRAND<std::string,const int, compare, equals_function>;
                const_map map;  
                const_map::const_iterator begin_iter = map.begin();
                const_map::const_iterator end_iter = map.end();
            }
        }
    }

    GIVEN("AVL") {
        WHEN("A normal map is used") {
            THEN("The interface is correct") {
                using non_const_map = cop3530::AVL<std::string,const int, compare, equals_function>;     
                non_const_map map;           
                non_const_map::iterator begin_iter = map.begin();
                non_const_map::iterator end_iter = map.end();
            }
        }
    
        WHEN("A const map is used") {
            THEN("The interface is correct") {
                using const_map = cop3530::AVL<std::string,const int, compare, equals_function>;
                const_map map;  
                const_map::const_iterator begin_iter = map.begin();
                const_map::const_iterator end_iter = map.end();
            }
        }
    }
}

