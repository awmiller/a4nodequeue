CSC 340 Assignment 4
Implementation of Node:

Node is a simple data container that allows single linkage.

class Node {
public:
    Node(int value);
    Node *next;
    int value;
};

All members are public because the class is not intended for use outside the this library.

Queue is implemented as a singly linked list, the Node's "next" member allows the elements of Queue to "link" to eachother. 


void Queue::enqueue(int value){
    
  if(this->isEmpty()){
      beginning = new Node(value);
      end = beginning;
  }
  else
  {
      end->next = new Node(value);
      end = end->next;
  }
  
  count ++;
}

int Queue::dequeue(void){
  if( this->isEmpty() )
  {
      return EMPTY_VALUE;
  }
  
  int ret = beginning->value;

  Node *toBeDestroyed = beginning;
  
  beginning = beginning->next;

  delete(toBeDestroyed);
    
  count --;
	
  return ret;
}


output:


Creating QueueTest
--- Testing queue is not empty ---
PASS

--- Testing queue size is 30 ---
PASS

--- Testing queue front is 6203 ---
PASS

--- Testing queue size is 30 ---
PASS

--- Testing dequeue should be 6203 ---
PASS

--- Testing queue size is 29 ---
PASS

--- Testing queue front is 812 ---
PASS

--- Testing clearing the queue (isEmpty and dequeue) ---
PASS

--- Testing queue is empty ---
PASS

--- Testing default value returned when dequeue called on empty Queue ---
PASS

Destroyed QueueTest
