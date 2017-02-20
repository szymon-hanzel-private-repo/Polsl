#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include<utility>
#include <vector>
class Data;
class Buffer
{
	std::vector<char> binary_data_;

public:

	Buffer() {}
	Buffer(const std::string &input_filename)
	{
		fileRead(input_filename);
	}
	Buffer& operator= (Data&& to_move);
	~Buffer() {}
	void Buffer::fileRead(const std::string &input_filename);
	
	//void fileWrite(const std::string &output_filename);

	std::vector<char>& getData()
	{
		return binary_data_;
	}
};