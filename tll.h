#include <iostream>
#include <string>
#include <sstream>
#include "element.cpp"

using namespace std;

#ifndef TRIPLYLINKEDLIST_H
#define TRIPLYLINKEDLIST_H

template <class T> 
class linkedlist
{
private:
    struct Node
    {
        Element<T> item;
        Node *parent;
        Node *left;
        Node *right;
    };
    
    Node *head;          

public:
    linkedlist( void );
    void insert( const Element<T> &elem );
    void remove(const int k);
    string to_string( void ) const; 
    bool search(const Element<T> &elem) const;
    bool is_empty( void );
};

#endif
