#include "DoublyLinkedList.h"
DoublyLinkedList::DoublyLinkedList(){
    head = nullptr;
    tail = nullptr;
};
void DoublyLinkedList::addFront(Node* node){
    if(head == nullptr){
        head = tail = node;
        return;
    }else{
        node->next = head;
        head->prev = node;
        head = node;
    }
}