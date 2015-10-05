/**
*	@file PreconditionViolationException.cpp
* @author Will Ashley
*	@date 2015.10.04
*	@Description: This class inhereits from standard runtime and will be called when the user attempts to peek at an 
*	empty stack or tries to pop an empty stack.
*	*	*/

#include "PreconditionViolationException.h"

PreconditionViolationException::PreconditionViolationException(const char* message):std::runtime_error(message)

{
//Constructor


}




