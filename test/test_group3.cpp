#include "catch.hpp"
#include <string>

#include "../src/HASHOPEN.h"
#include "../src/HASHBUCKET.h"

size_t hash_function(const std::string &key) {
    return 0; // fire hash function
}

bool equals_function(const std::string &lhs, const std::string &rhs) {
    return lhs == rhs;
}

SCENARIO("BONUS: Group 3") {
    WHEN("HASHOPEN is used") {
        cop3530::HASHOPEN<std::string,int, hash_function, equals_function> map(1);     

        THEN("The interface is correct") {
            bool contains = map.contains("information");
            bool empty = map.is_empty();
            bool full = map.is_full();
            size_t size = map.size();
            map.clear();
            size_t capacity = map.capacity();
            double load = map.load();
        }
    }

    WHEN("HASHBUCKET is used") {
        cop3530::HASHBUCKET<std::string,int, hash_function, equals_function> map(1);     

        THEN("The interface is correct") {
            bool contains = map.contains("information");
            bool empty = map.is_empty();
            bool full = map.is_full();
            size_t size = map.size();
            map.clear();
            size_t capacity = map.capacity();
            double load = map.load();
        }
    }
}