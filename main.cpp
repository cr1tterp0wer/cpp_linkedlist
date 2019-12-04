#include<iostream>
#include "LinkedList.h"

using std::endl;
using std::cout;

int main(){

  LinkedList<int> mylist; 
  
  mylist.listAppend( 12 );
  mylist.insertAfter( mylist.getHead(), 16 );

  cout << mylist.getHead()->data << endl;


  return 0;
}
