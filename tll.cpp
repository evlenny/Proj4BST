#include <iostream>
#include <string>
#include "tll.h"

using namespace std;

//=========================================================================
// constructor 
// Parameters: none
// Return:	none
//=========================================================================
template <class T>
triplinkedlist<T>::triplinkedlist()
//preconditions: 
//postconditions:  
{
    head = nullptr;
}

//=========================================================================
// insert 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
void triplinkedlist<T>::insert( const Element<T> &elem )
//preconditions: 
//postconditions:  
{
    
}

//=========================================================================
// remove 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
void triplinkedlist<T>::remove(const T k)
//preconditions: 
//postconditions: 
{
    
}

//=========================================================================
// empty 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
bool  triplinkedlist<T>::empty( void )
//preconditions: 
//postconditions: 
{
    return head == nullptr;
}

//=========================================================================
// max_key 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
T triplinkedlist<T>::max_key()
//preconditions: 
//postconditions:  
{
    Element<T> max = x;
    while (x != NULL){
        max = x;
        x = x.left;
    }
    return max.key;
}

//=========================================================================
// max_data 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
T triplinkedlist<T>::max_data()
//preconditions: 
//postconditions: 
{
    Element<T> max = x;
    while (x != NULL){
        max = x;
        x = x.left;
    }
    return max.data;
}

//=========================================================================
// min_key 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
T triplinkedlist<T>::min_key()
//preconditions: 
//postconditions:  
{
    Element<T> min = x;
    while (x != NULL){
        min = x;
        x = x.right;
    }
    return min.key;
}

//=========================================================================
// min_data 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
T triplinkedlist<T>::min_data()
//preconditions: 
//postconditions:  
{
    Element<T> min = x;
    while (x != NULL){
        min = x;
        x = x.right;
    }
    return min.data;
}

//=========================================================================
// successor 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
T triplinkedlist<T>::successor(const T k)
//preconditions: 
//postconditions:  
{
    
}

//=========================================================================
// in_order 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
string triplinkedlist<T>::in_order()
//preconditions: 
//postconditions:  
{
    
}

//=========================================================================
// trim 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
void triplinkedlist<T>::trim(T high, T low)
//preconditions: 
//postconditions:  
{
    
}