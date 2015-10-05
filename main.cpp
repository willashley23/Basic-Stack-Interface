/**
*	@file main.cpp
* @author Will Ashley
*	@date 2015.10.04
*	@Description: main acts as the driver for the program. It creates the necessary instances of the objects and a few ints to store
*	user data. It prints a list for the user to interact with, and calls the methods of the stack.
*	*/

#include "StackInterface.h"
#include "Stack.h"
#include "Test.h"
#include <iostream>




void printMenu()
{

  std::cout 	<< "\n\nSelect an action:\n"
			<< "1) Add to stack 1\n"
			<< "2) See what is at the top of stack\n"
			<< "3) Print all stack\n"
			<< "4) Pop stack\n"
			<< "5) Quit\n"
 			<< "6) Run Tests\n"
			<< "Enter choice: ";
}


int main()
{

Test myTester(std::cout);

//Declare variables for user input
int response=0;
int addtop;
int peek;


Stack<int> UserStack;


while(response!=5)
{

  printMenu();
  std::cin >> response;

  //Control flow for different inputs
  

  if(response==1)
  {
    std::cout<<"\nPlease input a value.";
    std::cin >> addtop;
    UserStack.push(addtop);
  }

  if(response==2)
  {
    peek=UserStack.peek();
  }

  if(response==3)
  {
    UserStack.print();
  }

  if(response==4)
  {
    UserStack.pop();
  }

  if(response==5)
  {
    std::cout<<"\nThanks!";
    break;
  }

  if(response==6)
  {
    myTester.runTests();
  }

}

return(0);
}

