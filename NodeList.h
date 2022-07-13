//
//  NodeList.h
//  Assignment_1
//
//  Created by Scott McDonald on 2022-07-10.
//

#include <iostream>
using namespace std;


class Node{
public:
    int id;
    int data;
};

class NodeList{
 private:
 static const size_t LIST_SIZE = 500; // the maximum items in the list
 Node *items; // items will point to the dynamically allocated array
 size_t numItems; // the number of items currently in the list


public:
    NodeList(); // default constructor
    NodeList(NodeList &obj); // copy constructor
    bool check(int id); // checking function
    void set_values(); // setting function
    void print(); // printing function
    ~NodeList(); // destructor
};



    
    
    

