#include <iostream>
#include <string>
#include <sstream>
#include "element.cpp"

using namespace std;

#ifndef TRIPLYLINKEDLIST_H
#define TRIPLYLINKEDLIST_H

template <class T> 
class triplinkedlist
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
    triplinkedlist( void );
    ~triplinkedlist(void);
    void insert( const Element<T> &elem );
    //void remove(const Node<T> &node );
    string to_string( void ) const; 
    bool search(const Element<T> &elem) const;
    bool empty( void );
    T get( const T k );
    T max_data(void);
    T max_key(void);
    T min_data(void);
    T min_key(void);
    T successor( const T k);
    string in_order(void);
    void trim(T high, T low);
    Node triplinkedlist<T>::findNode(const triplinkedlist& tree, const T k);
    void transplant( Node u, Node v);
};

#endif
