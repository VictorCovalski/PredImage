#include <cstdlib>
#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::ifstream entrada_raw;

	entrada_raw.open(argv[1],std::ifstream::binary);
	std::ofstream saida_raw;

	saida_raw.open("original.raw",std::ofstream::binary); 

	char last;
	entrada_raw.get(last);
	saida_raw << last;

	while(entrada_raw.good())
	{
		char curr;
		entrada_raw.get(curr);
		char c = (char) ((int)last) - ((int)curr);
		saida_raw << c;
		last = c;
	}
	
	return 0;
}