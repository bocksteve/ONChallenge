#ifndef NODE_H
#define NODE_H

template <typename T>
class LinkedList;

template <typename T>
class Node
{
  //Declare List as a :friend" so it can access private data of Node
	friend class LinkedList<T>;

  private:
  	T data;
  	Node* next;
    Node* prev;

  public:
  	Node(T);
  	T getData();

};

template <typename T>
Node<T>::Node(T dataIn)
{
	data = dataIn;
	next = NULL;
  prev = NULL;
}

template <typename T>
T Node<T>::getData()
{
	return data;
}

#endif
