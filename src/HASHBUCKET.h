#ifndef HASHBUCKET_H
#define HASHBUCKET_H

#include <unordered_map>
#include <string>

namespace cop3530 {
template <typename K, typename V, int (*hash_function)(const K&), bool (*equals_function)(const K&, const K&)>
class HASHBUCKET {
    public:
    HASHBUCKET(size_t capacity) {
        this->map = std::unordered_map<K,V>();
    }

    ~HASHBUCKET() {
    }

    void insert(K key, V value) {
        this->map[key] = value;
    }

    void remove(K key) {
        this->map.erase(key);
    }

    V& lookup(K key) {
        return V();
    }

    bool contains(K key) {
        return true;
    }

    bool is_empty() {
        return true;
    }

    bool is_full() {
        return true;
    }

    size_t size() {
        return 0;
    }

    size_t capacity() {
        return 0;
    }

    double load() {
        return 0.0;
    }

    void clear() {

    }

    private:
    std::unordered_map<K,V> map;
};
}
#endif