#ifndef BSTRAND_H
#define BSTRAND_H

#include <unordered_map>

template <typename K, typename V, bool (*)(const K&, const K&), bool (*F)(const K&, const K&)>
class BSTRAND {
    public:
    BSTRAND() {
        this->map = std::unordered_map<K,V>();
    }

    ~BSTRAND() {
    }

    void insert(K key, V value) {
        this->map[key] = value;
    }

    void remove(K key) {
        this->map.erase(key);
    }

    V& lookup(K key) {
        return this->map.at(key);
    }

    private:
    std::unordered_map<K,V> map;
};
#endif