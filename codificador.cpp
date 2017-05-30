#include <cstdlib>
#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	if(argc < 3)
	{
		std::cout << "$./codificador <arquivo_entrada_raw> <nome_arq_saida>" << std::endl;
		return 1;
	}

	std::ifstream entrada_raw;
	entrada_raw.open(argv[1],std::ifstream::binary);
	
	std::ofstream saida_raw;
	saida_raw.open(argv[2],std::ofstream::binary); 

	char ted;
	entrada_raw.get(ted);

	unsigned char last = ted;
	int num = last;
	saida_raw.write((char *) &num, sizeof(int));
	
	while(entrada_raw.good())
	{
		entrada_raw.get(ted);
		unsigned char curr = ted;
		int c = last - curr;
		saida_raw.write((char *) &c, sizeof(int));
		last = curr;
	}
	saida_raw.close();
	return 0;
}