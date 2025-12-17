#include <unordered_map>
#include "../Data_Structures/LinkedList/DoublyLinkedList.h"

class LRUCache{
private:
    int capacity;
    std::unordered_map<int,Node*>mp;
    DoublyLinkedList dll;
public:
    LRUCache(int capacity);
    int get(int key);
    void put(int key,int value);    

};