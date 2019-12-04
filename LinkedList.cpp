#include "LinkedList.h"
// NODE
// Implements a simple Data Node for LL()
//
template<typename T>
Node<T>::Node(){
  this->data = NULL;
  this->next = nullptr;
}

template<typename T>
Node<T>::Node( T value, Node<T>* nextNode){
  this->data = value;
  this->next = nextNode;
}


// LINKED_LIST
// Implements a simple LL
//
template<typename T>
LinkedList<T>::LinkedList(){
  this->head = nullptr;
  this->tail = nullptr;
}

template<typename T>
Node<T>* LinkedList<T>::getHead() const{
  return this->head;
}

template<typename T>
Node<T>* LinkedList<T>::getTail() const{
  return this->tail;
}

template<typename T>
void LinkedList<T>::listAppend( T value ){
   Node<T> *newborn = new Node<T>( value, nullptr );

   if( this->head == nullptr ){
     this->head = newborn;
     this->tail = newborn;
     return;
   }

   Node<T>* current = this->head;
   while( current->next != NULL ){
     current = current->next;
   }

   current->next = newborn;
   this->tail = newborn;
}

template<typename T>
void LinkedList<T>::listPrepend( T value ){

  Node<T>* newborn = new Node<T>( value, this->head );

  if( this->head == nullptr ){
    this->tail = newborn;
  }

  this->head = newborn;
}

template<typename T>
void LinkedList<T>::insertAfter( Node<T>* curNode, T value ){

  Node<T>* newborn = new Node<T>( value, nullptr ); 

  
}


template<typename T>
int LinkedList<T>::getLength() const{
   Node<T>* current = this->head;
   int count = 0;

   while( current != NULL ){
     count++;
     current = current->next;
   }

   return count;
}




