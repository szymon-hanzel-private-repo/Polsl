#include <string>
#include <list>
#include "ICompressor.h"
#include "LZSS.h"
#include "Buffer.h"


using namespace std;

int main(int argc, char *argv[]) {

	//slowo
	string word;
	// lista kodów
	list<int> encoded;


	ICompressor *compressor = new LZSS();

	//bufor do przetwarzania operacji I/O
	Buffer buffer;

	//czytamy text z pliku
	word = buffer.readFromFile();

	// *compressor <= word - wywolanie funkcji operatora obiektu LZSS. Operator wykonuje kodowanie. Funkcja zwraca wartoœæ (list<int> - lista kodów)
	// do encoded przypisujemy listê kodów
	encoded = *compressor <= word; //polimorfizm

								   //zapisywanie zakodowanego tekstu do pliku
	buffer.writeToFile(encoded);

	// pobieranie zakodowanego tekstu z pliku
	encoded = buffer.getCode(buffer.readFromFile());

	//dekompresowanie tekstu
	word = *compressor >= encoded;  //polimorfizm

									//zapisywanie odkodowanego tekstu do pliku
	buffer.writeToFile(word);

}