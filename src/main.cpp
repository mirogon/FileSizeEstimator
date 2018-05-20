#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[])
{
	if(argc <= 0)
	{
		std::cout<<"Please input a the file path"<<std::endl;
		return 0;
	}

	std::ifstream is(argv[1], std::ios::in);

	char c;

	
	unsigned int num_c = 0;
	
	while(is.get(c))
	{
		++num_c;
	}

	std::cout<<"Estimated size of the file: "<<num_c<<" Bytes"<<std::endl;

	return 0;
}
