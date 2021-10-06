
#include "TreeT.h"

template<class T>
TreeT<T>::TreeT() {
    root = nullptr;
    numNodes = 0;
}

template<class T>
TreeT<T>::~TreeT() {

}

template<class T>
void TreeT<T>::Add(T value) {
    Node* curr = root;
    Node* parent = nullptr;

    while(curr != nullptr){

        if(value == curr->value){
            return;
        }
        parent = curr;
        if(value < curr->value){

            curr = curr->left;
        }
        else{
            curr = curr->right;
        }

    }

    Node* newNode = new Node;
    newNode->value = value;

    if(parent == nullptr){
        root = newNode;
    }
    if(value < parent->value){
        parent->left = newNode;
    }
    else{
        parent->right = newNode;
    }

    numNodes++;
}

template<class T>
void TreeT<T>::Remove(T value) {

}

template<class T>
bool TreeT<T>::Contains(T value) {
    Node* curr = root;

    while(curr != nullptr){

        if(value == curr->value){
            return true;
        }

        if(value < curr->value){
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }

    }

    return false;
}

template<class T>
int TreeT<T>::Size() {
    return 0;
}

template<class T>
void TreeT<T>::ResetIterator(Order traverseOrder) {

}

template<class T>
T TreeT<T>::GetNextItem() {
    return nullptr;
}

template<class T>
void TreeT<T>::AddR(T value) {

}

template<class T>
bool TreeT<T>::ContainsR(T value) {
    return ContainsHelper(root, value);
}

template<class T>
bool TreeT<T>::IsEmpty() {
    return false;
}

template<class T>
void TreeT<T>::CopyHelper(TreeT::Node *subroot,T value) {

    if(subroot->value == value){
        return true;
    }

    if(value < subroot->value){
        return ContainsHelper(subroot->left, value);
    }
}

