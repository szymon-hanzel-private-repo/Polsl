#include <iostream>
#include <string>

using namespace std;
//void GetArguments(int argc, char** & argv, string &infile_name, string &outfile_name)
//{
//	if (argc <= 1)
//		throw ArgError(ArgError::Type::no_arg);
//	else if (argc > 5)
//		throw ArgError(ArgError::Type::too_many);
//	else if (argc < 5)
//		outfile_name = "Output.txt"; // domyslna nazwa pliku wyjsciowego, jesli nie zostala podana
//
//	for (int i = 1; i < argc; i++)
//	{
//		if (argv[i][0] == '-')
//		{
//			char c_control = argv[i][1];
//
//			switch (c_control)
//			{
//			case 'i':
//			case 'I':   // input
//
//				if (argc == 3) // jesli podano tylko plik out
//					throw ArgError(ArgError::Type::only_out);
//				else if (argv[i + 1] != '\0') // czy podano œcie¿kê po prze³¹czniku
//					infile_name = argv[++i];
//				else
//					throw ArgError(ArgError::Type::no_after_i);
//
//				break;
//
//			case 'o':
//			case 'O':
//
//				if (argc == 3) // jesli podano tylko plik out
//					throw ArgError(ArgError::Type::only_out);
//				else if (argv[i + 1] != '\0') // czy podano œcie¿kê po prze³¹czniku
//					outfile_name = argv[++i];
//				else
//					throw ArgError(ArgError::Type::no_after_o);
//
//				break;
//
//			default: // jesli niepoprawny przelacznik
//
//				throw ArgError(ArgError::Type::wrong_);
//				break;
//			}
//		}
//		else
//		{
//			throw ArgError(ArgError::Type::wrong_);
//		}
//	}
//}


int main()
{

}