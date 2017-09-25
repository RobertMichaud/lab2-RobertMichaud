// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

//Modified by Robert Bryce Michaud

#include "LinkedList.h"


int main()
{
    
	List cows;
	cout << "cows list  :  " << cows << endl;
    cout << "List Length: " << cows.listCount() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl;
    cout << "List Length: " << cows.listCount() << endl;
    cout << "List sum: " << cows.listSum() << endl;
    cout << "insertAsLast() called" << endl;
    cows.insertAsLast(4.35);
    cout << "cows list : " << cows << endl << endl;


	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
    cout << "List Length: " << cows.listCount() << endl;
    cout << "List sum: " << cows.listSum() << endl << endl;



	List horses(cows);
	cout << "cows list  :  " << cows << endl;
    cout << "List Length: " << cows.listCount() << endl;
    cout << "List sum: " << cows.listSum() << endl << endl;


	cout << "horses list:  " << horses << endl << endl;
    cout << "List Length: " << horses.listCount() << endl;
    cout << "List sum: " << horses.listSum() << endl << endl;




	
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
    cout << "List Length: " << cows.listCount() << endl;
    cout << "List sum: " << cows.listSum() << endl << endl;

    horses.removeFirst();
    horses.insertAsFirst(5.67);
	cout << "horses list:  " << horses << endl;
    cout << "List Length: " << horses.listCount() << endl;
    cout << "List sum: " << horses.listSum() << endl << endl;



	List pigs;
	cout << "cows list  :  " << cows << endl;
    cout << "List Length: " << cows.listCount() << endl;
    cout << "List sum: " << cows.listSum() << endl << endl;


	cout << "horses list:  " << horses << endl;
    cout << "List Length: " << horses.listCount() << endl;
    cout << "List sum: " << horses.listSum() << endl << endl;


	cout << "pigs list  :  " << pigs << endl;
    cout << "List Length: " << pigs.listCount() << endl;
    cout << "List sum: " << pigs.listSum() << endl << endl;



	pigs = cows;
	cout << "cows list  :  " << cows << endl;
    cout << "List Length: " << cows.listCount() << endl;
    cout << "List sum: " << cows.listSum() << endl << endl;


	cout << "horses list:  " << horses << endl;
    cout << "List Length: " << horses.listCount() << endl;
    cout << "List sum: " << horses.listSum() << endl << endl;


	cout << "pigs list  :  " << pigs << endl;
    cout << "List Length: " << pigs.listCount() << endl;
    cout << "List sum: " << pigs.listSum() << endl << endl;



	pigs = horses;
	cout << "cows list  :  " << cows << endl;
    cout << "List Length: " << cows.listCount() << endl;
    cout << "List sum: " << cows.listSum() << endl << endl;


	cout << "horses list:  " << horses << endl;
    cout << "List Length: " << horses.listCount() << endl;
    cout << "List sum: " << horses.listSum() << endl << endl;


	cout << "pigs list  :  " << pigs << endl;
    cout << "List Length: " << pigs.listCount() << endl;
    cout << "List sum: " << pigs.listSum() << endl << endl;



	cout << "End of code" << endl;

	return 0;
}
