//Adrian Antonio
//Homework 2 for CS202 





#include "files.hpp"

int getIdFromFile(const std::string& s, std::istream& si, std::ostream& os)
{
	std::ifstream ifile(s);
	std::string line;
	std::string lineInput;
	std::string userInput;
	std::string userName;
	int userID;
	if (!ifile) {
		return -1;
	}
	while (ifile) 
	{

		std::getline(ifile, line);
		ifile >> userName >> userID;
		si >> userInput;
		if (userName == userInput) {
			return userID;
		}
		if (!ifile) 
		{
			if (ifile.eof()) 
			{
				break;
			}
		}
	}
	
	
	return 0;
}


void numberChase(const std::string& s, std::ostream& os)
{

}
