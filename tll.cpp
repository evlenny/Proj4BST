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
    Node *newNode = new Node(elem);
    Node *y = nullptr;
    Node *x = head;

    while ( x != nullptr){
        y = x;
        if (elem.get_key() < x->item.get_key()){
            x = x->left;
        else{
            x = x->right;
        }
        }
    }
    
    newNode->parent = y;
    if (y == nullptr) {
        head = newNode;
    } else if (elem.get_key() < y->item.get_key()) {
        y->left = newNode;
    } else {
        y->right = newNode;
    }
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
        while ( y != NULL && x == y.right){
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
Element<T> triplinkedlist<T>::findNode(triplinkedlist root, const T k)
//preconditions: 
//postconditions:  
{
    while (root != nullptr && root.key != k) {
        if (k < root.key)
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
// preconditions: none
// postconditions: a string is returned with the in-order traversal of the tree

{
    string s = ""; // Empty string
    if (x != NULL) // If x is not null
    {
        s += in_order(x.left);  // Recursively call InOrderTreeWalk on the left child
        s += x.key;             // Add the key to the string
        s += in_order(x.right); // ecursively call InOrderTreeWalk on the right child
    }
    return s; // return the string
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

//=========================================================================
// transplant 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
void triplinkedlist<T>::transplant( Node<T> u, Node<T> v)
//preconditions: 
//postconditions:  
{
    if ( u.parent == nullptr )
        this.root = v;
    else if (u == u.parent.left )
        u.parent.left = v;
    else (u.parent.right = v);
    if ( v != NULL )
        v.parent = u.parent;
}


//=========================================================================
// min 
// Parameters: 
// Return:	
//=========================================================================
template <class T>
Node<T> triplinkedlist<T>::min()
//preconditions: 
//postconditions:  
{
    Node<T> x = this.root;
    while ( x != NULL ){
        x = x.left;
    }
    return x.parent
}
