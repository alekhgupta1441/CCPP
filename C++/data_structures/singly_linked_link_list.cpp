// This program is for the implementation of a singly linked link list, which is a linear data structure, with only one direction to propogate.
// The main idea behind linked lists is that they can be used as arrays with dynamic size.
// Although propogation through linked list is slower, it is sometimes more efficient to use linked lists insetad of arrays when 
// there is limited amount of memory avalivble.

#include <iostream>

/*
singly linked link list.

supported methods are:
    push_back
    pop_back
    size
    to_array
*/
template <typename T>
class link_list{
    //Building blocks for linked lists.
    //This Node contains the data stored by list, and the pointer to the next element, which is NULL by default.
    struct Node{
        T data;
        Node* next = nullptr;
    };

    Node root;
    int _size = 0;
    
    void push_back(Node* root, T data){
        while(root->next!=nullptr){
            root = root->next;
        }
        root->next = new Node;
        root->data = data;
        _size++;
    }

    T* to_array(Node* root){   
       T *arr = new T[_size];
       for(int i = 0; i < _size; i++){
           arr[i] = root->data;
           root = root->next;
       }
       return arr;
    }

    void pop_back(Node* root){
        if(_size==0){
            return;
        }
        if(root->next == nullptr){
            delete root;
            _size--;
            return;
        }
        while(root->next->next!=nullptr){
            root = root->next;
        }
        delete root->next;
        root->next = nullptr;
        _size--;
    }

    public:
    /*
        Adds the data to the end of a linked list
    */
    void push_back(T data){
        push_back(&root, data);
    }

    /*
        returns the link list as an array.
    */
   T* to_array(){
       T* arr = to_array(&root);
       return arr;
   }

    /*
        returns size of link list
    */
   int size(){
       return _size;
   }

    /*
        deletes the last element of link list
    */
   void pop_back(){
       pop_back(&root);
   }
};


int main(){
    link_list<int> ll;
    ll.push_back(5);
    ll.push_back(10);
    int* arr = ll.to_array();
    for(int i = 0; i < ll.size(); i++){
        std::cout << arr[i] << std::endl;
    }
}