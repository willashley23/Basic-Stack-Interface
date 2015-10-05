/**
*	@file Node.hpp
* @author Will Ashley
*	@date 2015.10.04
*	@Description:This contains all the information within each node. Each node will have a value, a front pointer, and a back pointer. It will have methods to set and return these values as well as a few helper methods.
*/

template<typename T>
Node<T>::Node()

{

  m_next=nullptr;
  m_value=T();


}

template<typename T> 
 T Node<T>::getValue() 
{
  return(m_value);
}

template<typename T>
void Node<T>::setNext(Node<T>* next)
{

  m_next = next;

}

template<typename T>
void Node<T>::setValue(T value)
{

  m_value=value;

}


template<typename T>
Node<T>* Node<T>::getNext() 
{
  
  return(m_next);

}

template<typename T>
void Node<T>::TurnOffNext()
{

m_next = nullptr;

}


