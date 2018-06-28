#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "ListNode.h"

template <typename T>
class LinkedList
{
  private:
    Node<T> *head;
    Node<T> *tail;
    int size;

  public:
    LinkedList();
    // Constructor

    void push(T data);
    void pop(T data);
    // Push and pop nodes like a stack

    void insert_at(T data, int i);
    // Inserts Node at ith position

    bool search(T data);
    // Returns true if data exists in list, false if not

    int getSize();
    void printList();
    void sort();
    void reverse_sort();

    LinkedList sliceRange(int i, int j);
    // Returns new LinkedList from nodes between, and including,
    // ith position and jth position
}
