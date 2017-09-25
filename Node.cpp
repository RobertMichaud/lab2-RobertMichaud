// Node.cpp
// tom bailey   1050  31 jan 2011
// Definitions of the Node class methods

//Modified by Robert Bryce Michaud



#include "Node.h"


Node::Node(double entry)
	: entry_(entry), next_(NULL)
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) created at " << this << endl;
}

Node::Node(double entry, Node * next)
	: entry_(entry), next_(next)
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) created at " << this << endl << endl;
}

Node::~Node()
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) at " << this << " destroyed" << endl;
}
