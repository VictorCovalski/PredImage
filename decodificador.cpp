#include <cstdlib>
#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	if(argc < 3)
	{
		std::cout << "$./decodificador <arquivo bin entrada> <img raw saida>" << std::endl;
		return 1;
	}

	std::ifstream entrada_raw;
	entrada_raw.open(argv[1],std::ifstream::binary);

	std::ofstream saida_raw;
	saida_raw.open(argv[2],std::ofstream::binary); 

	unsigned int last;
	entrada_raw.read((char *)&last, sizeof(int));
	std::cout << last << std::endl;
	char car = last;
	saida_raw << car;

	while(entrada_raw.good())
	{
		int curr;
		entrada_raw.read((char *)&curr, sizeof(int));
		
		int c = last - curr;
		
		car = c;
		saida_raw << car;
		last = c;
	}
	saida_raw.close();
	return 0;
}