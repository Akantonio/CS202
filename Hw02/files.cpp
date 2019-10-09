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
		is >> userInput;
		std::cout << "{1" << userInput << "1}\n";//test delete
		while (true) 
		{

			if(userName==userInput)
			{
				std::cout << "{[" << userID << "]}\n";//test delete
				os << userID;
			}
			ifile >> userName >> userID;
			if (!ifile)
			{
				if (ifile.eof())
				{
					break;
				}
			}
		}
		if (!is) {
			if (is.eof())
			{
				break;
			}
		}
	}
	return 0;
}


void numberChase(const std::string& s, std::ostream& os)
{
	int move=0;
	int replace;
	std::ifstream inputFile(s,std::ifstream::binary);

}
