//Adrian Antonio
//Homework 2 for CS202 





#include "files.hpp"

int getIdFromFile(const std::string& s, std::istream& is, std::ostream& os)
{
	std::ifstream ifile(s);
	std::string line;
	std::string lineInput;
	std::string userInput;
	std::string userName;
	std::vector<std::string, int> fileNameAndID(100000);
	int userID;
	if (!ifile) {
		return -1;
	}
	while (true)
	{
		if (!is) {
			if (is.eof())
			{
				break;
			}
		}
		is >> userInput;
		

	}
	
	return 0;
}


void numberChase(const std::string& s, std::ostream& os)
{
	//int move=0;
	//int replace;
	//std::ifstream inputFile(s,std::ifstream::binary);
	//inputFile.seekg(move,sizeof(int));
}
