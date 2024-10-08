#include <iostream>

struct node {
    int value;
    node* next;
};

void addNodeToEnd(node* head, int val){

    node* current = head;
    while (current->next != nullptr){
        current = current->next;
    }
    node* newNode = new node;
    newNode->value = val;
    newNode->next = nullptr;

    current->next = newNode;

}

void showVals(node* head){

    node* current = head;
    std::cout<<std::endl;
    while (current != nullptr){
        std::cout<<current->value;
        current = current->next;
    }
    std::cout<<std::endl;

}

node* reverseLinkedList(node* current, node* prev){

    if (current->next == nullptr){
        current->next = prev;
        return current;
    }

    else{
        node* newHead = reverseLinkedList(current->next, current);
        current->next = prev;
        return newHead;
    }

}

void removeNthFromEnd(node* head, int n){

    node* dummyNode = new node;
    dummyNode->next = head;

    node* leftPointer = dummyNode;
    node* rightPointer = head;

    while (rightPointer != nullptr){
        if (n > 0){
            n -= 1;
        }
        else{
            leftPointer = leftPointer->next;
        }
        rightPointer = rightPointer->next;
    }

    leftPointer->next = leftPointer->next->next;

}

int main(){

    node* head = new node;
    head->value = 1;
    head->next = nullptr;

    for (int i = 2; i<7; i++){
        addNodeToEnd(head, i);
    }

    showVals(head);

    head = reverseLinkedList(head, nullptr);

    showVals(head);

    removeNthFromEnd(head, 3);

    showVals(head);

    delete[] head;
}