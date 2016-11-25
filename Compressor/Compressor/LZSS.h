#ifndef LZSS_H
#define	LZSS_H 

#include "ICompressor.h"

class LZSS : public ICompressor {
public:
	list<int> operator <=(string slowo);
	string operator >=(list<int>);
	void doNothing() {
		cout << "aasdfasdfs";
	}
};

#endif