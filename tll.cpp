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
//preconditions: none
//postconditions: linked list object is created 
{
    head = nullptr;
}

//=========================================================================
// insert 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::insert( const Element<T> &elem )
//preconditions: none
//postconditions: linked list object is created 
{
    //if empty, construct

    Node *newNode = new Node;
    newNode->item = elem;
    newNode->parent = nullptr;
    newNode->left = head;
    newNode->right = nullptr;

    while ( elem.get_key() != NULL ){
        if 
    }
 

    if (head != nullptr)
        head->prev = newNode;

    head = newNode;
}

//=========================================================================
// remove 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::remove()
//preconditions: none
//postconditions: linked list object is created 
{
    
}

//=========================================================================
// empty 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::empty()
//preconditions: none
//postconditions: linked list object is created 
{
    
}

//=========================================================================
// max_key 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::max_key()
//preconditions: none
//postconditions: linked list object is created 
{
    
}

//=========================================================================
// max_data 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::max_data()
//preconditions: none
//postconditions: linked list object is created 
{
    
}

//=========================================================================
// min_key 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::min_key()
//preconditions: none
//postconditions: linked list object is created 
{
    
}

//=========================================================================
// min_data 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::min_data()
//preconditions: none
//postconditions: linked list object is created 
{
    
}

//=========================================================================
// successor 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::successor()
//preconditions: none
//postconditions: linked list object is created 
{
    
}

//=========================================================================
// in_order 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::in_order()
//preconditions: none
//postconditions: linked list object is created 
{
    
}

//=========================================================================
// trim 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
triplinkedlist<T>::trim()
//preconditions: none
//postconditions: linked list object is created 
{
    
}