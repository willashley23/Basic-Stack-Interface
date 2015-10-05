/**
*	@file PreconditionViolationException.h
* @author Will Ashley
*	@date 2015.10.04
*	@Description: This class inhereits from standard runtime and will be called when the user attempts to peek at an 
*	empty stack or tries to pop an empty stack.
*	*/

#ifndef PRECONDITION_VIOLATION_EXCEPTION_H
#define PRECONDITION_VIOLATION_EXCEPTION_H

#include<stdexcept>


class PreconditionViolationException: public std::runtime_error

{

    public:

      //@pre none
      //@post throws an exception with the passed message
      PreconditionViolationException(const char* message);



};
#endif


