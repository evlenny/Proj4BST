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
void triplinkedlist<T>::insert( const Element<T> &elem )
{
    //if empty, construct

    Node *y = new Node;
    Node *x = head;

    while ( x != nullptr){
        y = x;
        if (elem.get_key() < x.item.get_key()){
            x = x.left;
        else{
            
        }
        }
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
    Node x = findNode(this, k);
    if ( x ==  nullptr )
        return nullptr;
    else{
        Node y = x.parent;
        while ( y != nullprt and x == y.right){
            x = y;
            y = y.parent;
        }
        return y
    }
}

//=========================================================================
// findNode 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
Node triplinkedlist<T>::findNode(triplinkedlist root, const T k)
//preconditions: 
//postconditions:  
{
    while (root != nullptr && root.key != k) {
        if (k < root->key)
            root = root.left;
        else
            root = root.right;
    }
    return root;
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
    string s = "";
    in_order(head, s);
    return s;
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
