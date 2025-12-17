#include "LRUCache.h"

LRUCache::LRUCache(int capacity){
    this->capacity = capacity;
}
int LRUCache::get(int key){
    if(mp.find(key) == mp.end()){
        return -1;
    }
    Node* node = mp[key];
    dll.removeNode(node);
    dll.addFront(node);
    return node->value;
}