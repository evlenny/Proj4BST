#include <iostream>
#include <string>
#include "tll.h"
#include <stack>

using namespace std;

//=========================================================================
// constructor 
// Parameters: none
// Return:	none
//=========================================================================
template <class D, class T>
triplinkedlist<D,T>::triplinkedlist()
//preconditions: none
//postconditions: triply linked list object is created 
{
    head = nullptr;
}

//=========================================================================
// deconstructor 
// Parameters: none
// Return:	none
//=========================================================================
template <class D, class T>
triplinkedlist<D,T>::~triplinkedlist()
//preconditions: triply linked list object exists
//postconditions: triply linked list object is deleted  
{
    Node *x = this->head;
    if (x)
    {
        deleteTree(x->left);
        deleteTree(x->right);
        delete x;
    }
}

//=========================================================================
// deleteTree 
// Parameters: none
// Return:	none
//=========================================================================
template <class D, class T>
void triplinkedlist<D,T>::deleteTree(Node* node)
//preconditions: triply linked list object exists
//postconditions: triply linked list object is deleted  
{
    if (node != nullptr){
        deleteTree(node->left);
        deleteTree(node->right);
    
        delete node;
    }
}

//=========================================================================
// insert 
// Parameters: 
//  elem - element to insert into the tree
// Return:	none
//=========================================================================
template <class D, class T>
void triplinkedlist<D,T>::insert( const Element<D,T> &elem)
//preconditions: triply linked list exists 
//postconditions: triply linked list now includes the element to insert in the correct spot 
{
    //if empty, construct
    Node *newNode = nullptr;
    newNode -> item = elem;
    Node *y = nullptr;
    Node *x = head;

    while ( x != nullptr){
        y = x;
        if (elem.get_key() < x->item.get_key())
            x = x->left;
        else
            x = x->right;
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
/*
//=========================================================================
// remove 
// Parameters: 
//  k - key of node to remove from the list
// Return:	none
//=========================================================================
template <class T, class D>

void triplinkedlist<T,D>::remove(const Node<T,D> &node )
//preconditions: 
//postconditions: 
{
    if (elem.left == nullptr){
        transplant(elem.right);
    } else if (elem.right == nullptr)

}
*/
//=========================================================================
// empty 
// Parameters: none
// Return:	
//  true - if the tree is empty
//  false - if the tree has at least one node
//=========================================================================
template <class D, class T>
bool  triplinkedlist<D,T>::empty( void )
//preconditions: the tree object exists
//postconditions: the boolean value returned correctly describes the tree 
{
    return head == nullptr;
}

//=========================================================================
// max_key 
// Parameters: none
// Return:	
//  the key associated with the max key in the tree 
//=========================================================================
template <class D, class T>
T triplinkedlist<D,T>::max_key()
//preconditions: the tree object exists and is not empty
//postconditions: the largest key in the tree is returned
{
    Node *x = this->head;
    Node *max = this->head;
    while (x != NULL){
        max = x;
        x = x->left;
    }
    return max->item.get_key();
}

//=========================================================================
// max_data 
// Parameters: none
// Return:
//  the data value associated with the largest key in the tree
//=========================================================================
template <class D, class T>
D triplinkedlist<D,T>::max_data()
//preconditions: the tree object exists and is not empty
//postconditions: the data value associated with the largest key in the tree is correctly returned
{
    Node *x = this->head;
    Node *max = this->head;
    while (x != NULL){
        max = x;
        x = x->left;
    }
    return max->item.get_data();
}

//=========================================================================
// min_key 
// Parameters: none
// Return:	
//  the key associated with the minimum key in the tree 
//=========================================================================
template <class D, class T>
T triplinkedlist<D,T>::min_key()
//preconditions: the tree object exists and is not empty
//postconditions: the key associated with the minimum key in the tree is correctly returned
{
   Node *x = this->head;
    Node *min = this->head;
    while (x != NULL){
        min = x;
        x = x->right;
    }
    return min->item.get_key();
}

//=========================================================================
// min_data 
// Parameters: none
// Return:	
//  the data value associated with the minimum key in the tree 
//=========================================================================
template <class D, class T>
D triplinkedlist<D,T>::min_data()
//preconditions: the tree object exists and is not empty
//postconditions: the data value associated with the minimum key in the tree is correctly returned
{
    Node *x = this->head;
    Node *min = this->head;
    while (x != NULL){
        min = x;
        x = x->right;
    }
    return min->item.get_data();
}

//=========================================================================
// successor 
// Parameters: 
//  k - the key of the node to find successor for
// Return:	
//  the node that has the next largest key after k in the tree
//=========================================================================
template <class D, class T>
T triplinkedlist<D,T>::successor(const T k)
//preconditions: the tree object exists and contains the key k
//postconditions: the correct successor of the node with key k is returned 
{
    Node *x = findNode(this, k);
    
    if ( x ==  nullptr )
        return nullptr;
    else{
        Node y = x->parent;
        while ( y != NULL && x == y->right){
            x = y;
            y = y->parent;
        }
        return y;
    }
}
/*
//=========================================================================
// findNode 
// Parameters: 
//  tree - tree object to search for node
//  k - key of the node to search for
// Return:	
//  node with key k 
//=========================================================================
template <class T, class D>
Node* triplinkedlist<T,D>::findNode(const triplinkedlist& tree, const T k)
//preconditions: the tree object tree exists 
//postconditions: the node with key k is correctly returned or NULL is returned if the k is not in the tree
{
    Node *x = tree.head;
    
    while (x != nullptr && x.key != k) {
        if (k < x.key)
            x = x.left;
        else
            x = x.right;
    }
    return x;
}
*/
//=========================================================================
// in_order 
// Parameters: none
// Return:	
//  the string of all keys of the tree in ascending order
//=========================================================================
template <class D, class T>
string triplinkedlist<D,T>::in_order()
//preconditions: 
//postconditions:  
{
    string s = "";
    in_order(head, s);
    return s;
}

/*
//=========================================================================
// trim 
// Parameters: 
// Return:	
//=========================================================================
template <class T, class D>
void triplinkedlist<T,D>::trim(T low, T high)
//preconditions: 
//postconditions:  
{
    
     {
    if (root == nullptr) return nullptr;

    // Trim the left and right subtrees
    root->left = trimRecursively(root->left, low, high);
    if (root->left){
        root->left->parent = root;
    } 

    root->right = trimRecursively(root->right, low, high);
    if (root->right) {
        root->right->parent = root;
    }
    // If the current node's key is less than low, trim it and return the right subtree
    if (root->item.key < low) {
        Node* rightSubtree = root->right;
        delete root; // Assume delete deallocates memory
        return rightSubtree;
    }
    // If the current node's key is greater than high, trim it and return the left subtree
    else if (root->item.key > high) {
        Node* leftSubtree = root->left;
        delete root; // Assume delete deallocates memory
        return leftSubtree;
    }
    // If the current node is within the range, return it
    return root;
}

    
    Node *x = this.head;
    Node *y = x.parent;

    //check RHS for high
    if (x.key < high){
        while ( x != NULL && x.key < high ){
            y = x;
            x = x.right;
        }
        if (x != NULL ){
            x.head = x
            triplylinkedlist<T> yt;
            yt(this)
    }
    }

    //check LHS for high 
    if (x.key > high){
        while ( x != NULL && x.key > high ){
            y = x;
            x = x.left;
        }
    }

    if (x != NULL ){

    }

    //check LHS for low 
    if (x.key > low){
        while ( x != NULL && x.key > low ){
            y = x;
            x = x.left;
        }
    }

    //check RHS for low 
    if (x.key < low){
        while ( x != NULL && x.key < low ){
            y = x;
            x = x.right;
        }
    }
    
}
*/
//=========================================================================
// transplant 
// Parameters: 
//  u - node of the higher node to transplant 
//  v - node of the lower node to transplant 
// Return:	none
//=========================================================================
template <class D, class T>
void triplinkedlist<D,T>::transplant( Node u, Node v)
//preconditions: the tree object exists and 
//postconditions:  node ’s parent be- comes node ’s parent, and ’s parent ends up having as its appropriate child
{
    if ( u.parent == nullptr )
        this->head = v;
    else if (u == u->parent->left )
        u->parent->left = v;
    else (u->parent->right = v);
    if ( v != NULL )
        v->parent = u->parent;
}

//=========================================================================
// get 
// Parameters: 
//  k - key of a node to find its data 
// Return:	
//  the data associated with the key k
//=========================================================================
template <class D, class T>
D triplinkedlist<D,T>::get(const T k)
//preconditions: the tree object exists and contains the key k
//postconditions: the data associated with the key k is correctly returned and NULL if k is not in the tree
{
    Node *x = this->head;

    while (x != nullptr && x->key != k) {
        if (k < x->item.key)
            x = x->left;
        else
            x = x->right;
    }

    if (x != nullptr && x->item.key == k)
        return x->item.data;
    else 
        return NULL;
}
