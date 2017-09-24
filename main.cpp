//
//  main.cpp
//  HW1.3
//
//  Created by Bryce Michaud on 9/22/17.
//  Copyright © 2017 Bryce Michaud. All rights reserved.
//

#include <iostream>
#include "Collection.cpp"

using namespace std;

int main()

{
    
    Collection<int> a;
    
    cout<<"Is the collection empty? "<<boolalpha<<a.isEmpty()<<endl;
    
    //Insert some numbers
    a.insert(1);
    
    a.insert(4);
    
    a.insert(5);
    
    a.insert(9);

    
    cout<<"Is collection empty? "<<boolalpha<<a.isEmpty()<<endl;
    
    cout<<"Does collection contain 1?" <<endl;

    a.notContained(1); //call 'notContained' with argument number
    
    cout<<"Does collection contain 7?" <<endl;
    
    a.notContained(7);
    
    cout << "removing 9 from the collection" << endl;
    
    a.remove(9);
    
    cout<<"Does collection contain 9?" <<endl;
    
    a.notContained(9);
    
    cout << "Emptying collection..." << endl;
    
    a.makeEmpty();
    
    cout<<"Is collection empty? "<<boolalpha<<a.isEmpty()<<endl;
    
    return 0;
    
    
    
}
