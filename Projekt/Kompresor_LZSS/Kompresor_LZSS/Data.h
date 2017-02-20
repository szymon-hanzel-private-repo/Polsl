#pragma once
#include "Buffer.h"
#include<iostream>
#include<string>
#include<vector>
#include<utility>
class Data
{
protected:
	std::vector<char> binary_data_;
	int window_size_;
	int buffer_size_;

public:

	//Data(Buffer&& to_move, int window_size, int buffer_size) : binary_data_(std::move(to_move.getData())), window_size_(window_size), buffer_size_(buffer_size) {}
	Data(int window_size, int buffer_size, Buffer&& to_move) :  window_size_(window_size), buffer_size_(buffer_size), binary_data_(std::move(to_move.getData())){}

	virtual void Compress() = 0;
	virtual void DeCompress() = 0;

	std::vector<char>& getData()
	{
		return binary_data_;
	}

	virtual ~Data() {}

};


