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
void LRUCache::put(int key,int value){
    if(mp.find(key) != mp.end()){
        Node* node = mp[key];
        node->value = value;
        dll.removeNode(node);
        dll.addFront(node);
        return;

    }
    if(mp.size() == capacity){
        Node* LRU = dll.removeLast();
        if(LRU != nullptr){
            mp.erase(LRU->key);
            delete LRU;
        }
    }
    Node* newNode =new Node(key,value);
    dll.addFront(newNode);
    mp[key] = newNode;
}