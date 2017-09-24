//
//  Collection.cpp
//  HW1.3
//
//  Created by Bryce Michaud on 9/22/17.
//  Copyright © 2017 Bryce Michaud. All rights reserved.
//

#include "Collection.hpp"
#include <iostream>
using namespace std;


//----Checks for empty array-----------------------------------------------------------
template <typename obj>

bool Collection<obj>::isEmpty() const{
    
    for(int i = 0; i < length; i++){
        
        if(collec[i] != '\0')
            return false;
        
    }
    
    return true;
    
}

//----Make array empty----------------------------------------------------------------
template <typename obj>

void Collection<obj>::makeEmpty()

{
    
    for(int k = 0; k < length; k++)
        
    {
        
        collec[k] = '\0';
        
    }
    
}

//----Insert an object----------------------------------------------------------------
template <typename obj>

void Collection<obj>::insert(obj elmnt)

{
    
    int init = 0;
    
    for(int i = 0; i < length; i++)
        
    {
        
        if(collec[i] != '\0')
            
            init++;
        
    }
    
    if(init >= length)
        
    {
        
        obj* temporary = new obj[length*2];
        
        for(int i = 0; i < length; i++)
            temporary[i] = collec[i];
        
        delete collec;
        
        collec = temporary;
        
    }
    
    else
        
        collec[init] = elmnt;
    
    
    
    cout << "\n" << elmnt << " inserted\n";
}

//----Remove an object----------------------------------------------------------------
template <typename obj>

void Collection<obj>::remove(obj val){
    
    for(int i = 0; i < length; i++){
        
        if (collec[i] == val){
            
            for(int j = i; j < length - 1; j++){
                
                collec[j] = collec[j + 1]; //shift values
                
            }
            
            collec[length - 1] = '\0'; //remove last 
            
            return;
            
        }
        
    }
    
}

//----Not Contained Function----------------------------------------------------------
template <typename obj>

void Collection<obj>::notContained(obj val) const{
    
    int temp = 0;
    for(int i = 0; i < length; i++){
        
        if(collec[i] == val){
            temp++;
        }
    
    }
    
    //AKA if there wasn't a positive loaction of the value in the collection
    if(temp == 0){
        cout << val << " is not in the collection" << endl;
    }
    
    return;

    
}
