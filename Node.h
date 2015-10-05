/**
*	@file Node.h
* @author Will Ashley
*	@date 2015.09.30
*	@Description:This contains all the information within each node. Each node will have a value, a front pointer, and a back pointer. It will have methods to set and return these values as well as a few helper methods.
*/


#ifndef NODE_H
#define NODE_H


template <typename T>
class Node 
{
  
  private: 
    T m_value;
    Node<T>* m_next;

  public:
    Node(); 

    //@pre valid node declared 
    //@post sets the value of m_value
    void setValue(T value); 

    //@pre valid node declared
    //@post returns m_value
		T getValue(); 

    //@pre valid node declared & valid node ahead 
    //@post sets m_next to the next node on the list
		void setNext(Node<T>* next);

    //@pre valid node declared and valid node ahead
    //@post returns the node ahead
		Node<T>* getNext(); 

    //@pre valid node declared
    //@post Helper method- sets m_next to null
    void TurnOffNext();



};
#include "Node.hpp"
#endif
