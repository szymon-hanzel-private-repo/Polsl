#ifndef BUFFER_H
#define BUFFER_H 

#include <string>
#include <list>

using namespace std;

class Buffer {
public:
	string readFromFile();
	void writeToFile(list<int> encoded);
	void writeToFile(string outputText);
	list<int> getCode(string code);
};

#endif