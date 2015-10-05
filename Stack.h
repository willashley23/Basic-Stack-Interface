/**
*	@file Stack.h
* @author Will Ashley
*	@date 2015.10.04
*	@Description: This is the stack class that implements all of the methods inherited from StackInterface. 
*	It initlaizes a stack object with a size of zero and a null pointer.
*	*/

#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "StackInterface.h"
#include "PreconditionViolationException.h"
#include "Node.h"


template<typename T>
class Stack:public StackInterface<T>


{

  private:
     int m_size; 
     Node<T>* m_front;

  public: 
     //Basic constructor 
     Stack();
     //Destructor
    ~Stack();

    //@pre stack created
    //@post returns true if empty and false if not
    bool isEmpty() const;

    //@pre valid stack created and valid input passed
    //@post puts the passed value on top of the stack
    void push(const T newEntry);

    //@pre valid stack created and valid input passed
    //@post removes the top item of the stack, throws and exception if is empty
    void pop() throw(PreconditionViolationException);

    //@pre valid stack created
    //@post returns the top item of the stack, throws exception if list empty
    T peek() const throw(PreconditionViolationException);

    //@pre none
    //@post returns the size of the stack (m_size)
    int size() const ;

    //@pre valid stack created
    //@post prints the contents of the stack or the empty string if it is empty
    void print() const;

};
#include "Stack.hpp"
#endif


