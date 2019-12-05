#include<iostream>
#include<assert.h>
#include<string>
#include "LinkedList.h"

using std::endl;
using std::cout;
using std::string;

//
// NOTE: ASSERTIONS ONLY LOG TO CONSOLE
//       WHEN THEY FAIL!
//
const int TEST_LENGTH = 5;

void testSearch(){

  LinkedList<string> mylist; 
  mylist.listAppend("Devil");
  mylist.listAppend("Satan");
  mylist.listAppend("Lucifer");
  mylist.listAppend("Azmodius");
  mylist.listAppend("Abadon");

  assert( mylist.search("Devil") == mylist.getHead() );//TERMINATE IF FAIL
  cout << "TestSearch(): PASSED - " << mylist.getHead()->data << endl;
}

void testGetLength(){

  LinkedList<string> mylist; 
  mylist.listAppend("Devil");
  mylist.listAppend("Satan");
  mylist.listAppend("Lucifer");
  mylist.listAppend("Azmodius");
  mylist.listAppend("Abadon");

  int len = mylist.getLength();
  assert( len == TEST_LENGTH ); //TERMINATE IF FAIL
  cout << "TestGetLength(): PASSED - "<< len << endl;
}

int main(){
//  testSearch();
//  testGetLength();
//


  LinkedList<string> mylist; 

  mylist.removeTail();
  mylist.listPrepend("Devil");
  mylist.listPrepend("Satan");

  mylist.removeAfter( mylist.search("Satan") );
  mylist.listAppend("Lucifer");
  mylist.listAppend("Azmodius");
  mylist.listAppend("Abadon");

//  mylist.printList();
  return 0;
}
