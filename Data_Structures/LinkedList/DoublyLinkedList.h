class Node{
    public:
        int key;
        int value;
        Node* next;
        Node* prev;

        Node(int key,int value){
            this->key = key;
            this->value = value;
            this->next = nullptr;
            this->prev = nullptr;
        }

};
class DoublyLinkedList{
    public:
    Node* head ;
    Node* tail;
    DoublyLinkedList();
        void  addFront(Node* node);
        void  removeNode(Node* node);
        Node* removeLast();
};
