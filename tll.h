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
    void insert( const Element<T> &elem );
    void remove(const Element<T> &elem);
    string to_string( void ) const; 
    bool search(const Element<T> &elem) const;
    bool empty( void );
    T get( k );
    T max_data(void);
    T max_key(void);
    T min_data(void);
    T min_key(void);
    T successor( const T k);
    string in_order(void);
    void trim(T high, T low);
    Element<T> findNode(triplinkedlist root, const T k);
};

#endif
