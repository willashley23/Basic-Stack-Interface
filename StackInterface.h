/**
*	@file StackInterface.h
* @author Will Ashley
*	@date 2015.10.04
*	@Description: This is the abstract class from which all other classes will Inherit, sans preconditionExceptionViolation.
*	*/

#ifndef STACKINTERFACE_H
#define STACKINTERFACE_H
#include "PreconditionViolationException.h"


template<typename T>
class StackInterface

{

public:

virtual ~StackInterface(){};

//@pre none
//@post returns true if the stack is empty, false if otherwise
virtual bool isEmpty() const = 0;

//@pre stack created
//@post Entry added to the top of the stack
virtual void push(const T newEntry) = 0;

//@pre The stack is not empty
//@post Top of the stack is removed. Throws PreconditionViolationException when attempted on an empty stack
virtual void pop() throw(PreconditionViolationException)=0;

//@pre The stack is not empty
//@post returns a value at the top of the stack, throws PreconditionViolationException if the stack is empty
virtual T peek() const throw(PreconditionViolationException)=0;

//@pre none
//@post returns the size of the stack
virtual int size() const =0;

//@pre none
//@post Prints the contense of the stack or prints the empty string if empty
virtual void print() const=0;



  
};
#endif

