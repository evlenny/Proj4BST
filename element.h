#include <iostream>
#include <string>
#include <chrono>

using namespace std;

// Header guards
#ifndef ELEMENT_H
#define ELEMENT_H

// Declaring element template class
template <class T>
class Element 
{
private:
        T data;
        T key;

public:
    Element( void ); // empty constructor
    Element( const T data, const int k ); // parameter constructor

    int     get_key( void ) const;
    T       get_data( void ) const;
    string  to_string( void ) const;
};

#endif
