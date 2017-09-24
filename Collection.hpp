//
//  Collection.hpp
//  HW1.3
//
//  Created by Bryce Michaud on 9/22/17.
//  Copyright © 2017 Bryce Michaud. All rights reserved.
//

#ifndef Collection_hpp
#define Collection_hpp

#include <stdio.h>


template <typename obj> //template w/ type named obj

class Collection{
    
public:
    
    //------Collection constructor-------
    Collection() {
        
        length = 10;
        
        collec = new obj[length];
        
        for(int i = 0; i < length; i++) {
            
            collec[i] = '\0';
            
        }
        
    }
    
    bool isEmpty() const;
    
    void makeEmpty();
    
    void insert(obj val);
    
    void remove(obj val);
    
    void notContained(obj val) const;
    
private:
    
    int length;
    
    obj * collec;
    
};




#endif /* Collection_hpp */
