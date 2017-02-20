#include "Buffer.h"
#include"Data.h"

void Buffer::fileRead(const std::string &input_filename)
{
	std::ifstream input(input_filename, std::ios::binary | std::ios::in);

	if (input.is_open())
	{
		binary_data_.assign((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
		input.close();
	}

	else
		;
//	/* jakis wyjatek trzeba rzucic
//	np throw Error("Blad pliku wej" [albo jakis enum]);*/
}

Buffer& Buffer::operator= (Data&& to_move)
{
	binary_data_ = std::move(to_move.getData());
	return *this;

}
//trololo