//Adrian Antonio
//Homework 2 for CS202 





#include "files.hpp"

int getIdFromFile(const std::string& s, std::istream& is, std::ostream& os)
{
	std::ifstream ifile(s);
	std::string line;
	std::string lineInput;
	
	std::string userName;
	int userID;
	if (!ifile) {
		return -1;
	}
	while (true)
	{
		std::string userInput;
		if (!is) {
			if (is.eof())
			{
				break;
			}
		}
		else
		{
			std::getline(is, userInput);
		}
		std::cout << "{" << userInput << "}\n";//test delete
	}
	//std::cout << "2{" << userInput << "}2\n";//test delete
	return 0;
}


void numberChase(const std::string& s, std::ostream& os)
{
	int move=0;
	int replace;
	std::ifstream inputFile(s,std::ifstream::binary);

}
