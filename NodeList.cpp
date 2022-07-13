//
//  NodeList.cpp
//  Assignment_1
//
//  Created by Scott McDonald on 2022-07-10.
//

#include "NodeList.h"
#include <iostream>

using namespace std;

// default constructor
NodeList::NodeList(){
    numItems=0;
    items = NULL;
}

// copy constructor
NodeList::NodeList(NodeList &obj){
if(obj.numItems == 0)
return;
    
items = new Node[obj.numItems];
numItems = obj.numItems;
    
    for(int i = 0;i < obj.numItems; i++){
        
        items[i].id = obj.items[i].id;
        items[i].data = obj.items[i].data;
    }
}


// print constructor
void NodeList::print()
{
    cout << "The ID and Values of the given Nodes are: \n";
    for(int i=0; i< numItems; i++)
        cout << items[i].id << "" << items[i].data<< endl;
}

// checking function
bool NodeList::check(int id)
{
    for(int i=0; i < numItems; i++)
    {
        if( id == items[i].id)
            return true;
    }
            return false;
    }

// setting the data
void NodeList::set_values(){
    int value;
    cout << "Enter the amount of items: \n";
    cin >> value;
    
    if(value > LIST_SIZE){
        cout << "The maximum number of items is 500, please choose a smaller number of items";
        return;
    }
    
    numItems = value;
    cout << "Enter the ID and Data: " << endl;
    for(int i = 0; i < numItems; i++)
    {
        int ID, value;
        cin >> ID >> value;
        
        items[i].id = ID;
        items[i].data = value;
    }
}

// destructor
NodeList::~NodeList(){
    // just a destructor, doesn't do anything
}




