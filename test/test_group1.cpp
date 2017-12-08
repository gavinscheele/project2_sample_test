#include "catch.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <exception>

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

SCENARIO("BONUS: Group 1") {
    WHEN("BSTLEAF is used") {
        cop3530::BSTLEAF<std::string,int, compare, equals_function> tree;     

        THEN("The interface is correct") {
            bool contains = tree.contains("information");
            bool empty = tree.is_empty();
            bool full = tree.is_full();
            size_t size = tree.size();
            tree.clear();
            int height = tree.height();
            int balance_factor = tree.balance();
        }
    }

    WHEN("BSTROOT is used") {
        cop3530::BSTROOT<std::string,int, compare, equals_function> tree;     
           
        THEN("The interface is correct") {
            bool contains = tree.contains("information");
            bool empty = tree.is_empty();
            bool full = tree.is_full();
            size_t size = tree.size();
            tree.clear();
            int height = tree.height();
            int balance_factor = tree.balance();
        }
    }

    WHEN("BSTRAND is used") {
        cop3530::BSTRAND<std::string,int, compare, equals_function> tree;     
           
        THEN("The interface is correct") {
            bool contains = tree.contains("information");
            bool empty = tree.is_empty();
            bool full = tree.is_full();
            size_t size = tree.size();
            tree.clear();
            int height = tree.height();
            int balance_factor = tree.balance();
        }
    }

    WHEN("AVL is used") {
        cop3530::AVL<std::string,int, compare, equals_function> tree;     
           
        THEN("The interface is correct") {
            bool contains = tree.contains("information");
            bool empty = tree.is_empty();
            bool full = tree.is_full();
            size_t size = tree.size();
            tree.clear();
            int height = tree.height();
            int balance_factor = tree.balance();
        }
    }
}