#ifndef ICOMPRESSOR_H
#define ICOMPRESSOR_H

#include <list>
#include <iostream>
#include <string>

using namespace std;

class ICompressor {
public:
	virtual list<int> operator <=(string slowo) = 0;
	virtual string operator >=(list<int>) = 0;
};


#endif