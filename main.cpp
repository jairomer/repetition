#include <iostream>
#include <string>
#include <cstdlib>

void printCurious(int indirectionLevel, std::string adj, std::string msg) {
	
	std::cout << "Es "<< adj <<" que ";
	for (int i=1; i<=indirectionLevel; ++i) {
		if (i%2 == 1) {
			std::cout << "te parezca "
				<< adj 
				<< " que "; 
		} else {
			std::cout << "a mi me parezca "
				<< adj
				<< " que ";
		}
	}
	std::cout << msg << std::endl;
}

int main(int argc, char** argv) {
	int indirection = 0;
	if (argc < 3) {
		std::cout << "Arguments: <indirection level> \"<adjective>\" \"<message>\""
			<< std::endl;
		return 0;
	}
	
	indirection = std::atol(argv[1]);
	printCurious(indirection, std::string{argv[2]}, std::string{argv[3]});

	return 0;
}
