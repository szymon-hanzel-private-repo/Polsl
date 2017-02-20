#pragma once
#include "Data.h"

class LZSS : public Data
{
public:

	LZSS(int window_size, int buffer_size, Buffer&& to_move) : Data(window_size, buffer_size, std::move(to_move)) {}
	// Implementacja funkcji czysto wirtualnej Compress
	virtual void Compress()
	{

	}

	virtual void DeCompress()
	{

	}
	~LZSS() {}

};