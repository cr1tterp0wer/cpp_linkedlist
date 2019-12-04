#include<iostream>
#include "LinkedList.h"

using std::endl;
using std::cout;

int main(){

  LinkedList<int> mylist; 
  
  mylist.listAppend( 100 );
  mylist.listPrepend( 9 );
  mylist.insertAfter( mylist.getHead(), 10 );
  mylist.insertAfter( mylist.getHead(), 16 );
  mylist.insertAfter( mylist.getTail(), 22 );
  mylist.removeAfter( mylist.getHead() );

  mylist.printList();
  return 0;
}
