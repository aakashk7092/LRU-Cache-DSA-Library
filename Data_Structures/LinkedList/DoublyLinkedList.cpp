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
void DoublyLinkedList::removeNode(Node* node){
    if(node == nullptr) return;
    if(node == head && node == tail){
        head = nullptr;
        tail= nullptr;
        return ;
    }
    if(node == head){
        head = head->next;
        head->prev = nullptr;
        return;
    }
    if(node == tail)
{
        tail = tail->prev;
        tail->next = nullptr;
        return;
    }
    node->prev->next = node->next;
    node->next->prev = node->prev;
}
Node* DoublyLinkedList::removeLast(){
    if(tail ==nullptr){
        return nullptr;
    }
    Node* removedNode = tail;

    if(head == tail){
        head = nullptr;
        tail = nullptr;
        return removedNode;
    }
    tail = tail->prev;
    tail->next = nullptr;
    removedNode->next = nullptr;
    removedNode->prev = nullptr;
    return removedNode;
}    