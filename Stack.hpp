/**
*	@file Stack.hpp
* @author Will Ashley
*	@date 2015.10.04
*	@Description: This is the stack class that implements all of the methods Inherited from StackInterface. 
*	It initlaizes a stack object with a size of zero and a null pointer.
*	*/


template<typename T>
bool Stack<T>::isEmpty() const
{
    
  if(m_size==0)
  {
    return(true);
  }
  else
  {
    return(false);
  }

}


template<typename T>
Stack<T>::Stack()
{

  m_size=0;
  m_front =nullptr; 

}


//Destructor 
template<typename T>
Stack<T>::~Stack()
{

while(m_size>0)
{
this->pop();
}

}


template<typename T>
void Stack<T>::push(const T newEntry)
{
  //Declare the new node and give it a value
  Node<T>* temp = new Node<T>();
	temp -> setValue(newEntry);

	  if(m_size >= 1)
    {
		  temp->setNext(m_front);
    }

	  else 
    {
		  temp->setNext(nullptr);
    }

	m_front = temp;
	temp = nullptr;
	m_size++;	
}


template<typename T>
void Stack<T>::pop() throw(PreconditionViolationException)
{

  if(m_size!=0)
  {

    Node<T>* temp=nullptr;
    temp=m_front;
    m_front=m_front->getNext();
    delete temp;
    temp=nullptr;
    m_size--;

  }

    else
    {
    throw(PreconditionViolationException("\nPop attempted on an empty stack"));
    }
}


template<typename T>
T Stack<T>::peek() const throw(PreconditionViolationException)
{

  if(!isEmpty())
  {
      return(m_front->getValue());
  }

  else
  {
     throw(PreconditionViolationException("Peek attempted on an empty list!"));
  } 

}


template<typename T>
int Stack<T>::size() const
{

  return(m_size);

}

template <typename T>
void Stack<T>::print() const
{
	if(!isEmpty())
		{	
			Node<T>* temp = m_front;
			while(temp!= nullptr)
				{
					std::cout<<temp->getValue() << " ";
					temp=temp->getNext();	
				}
		}
	else
		std::cout << "";	
}
