//Adrian Antonio
//Homework 2 for CS202 





#include "files.hpp"

int getIdFromFile(const std::string& s, std::istream& si, std::ostream& os)
{
	std::ifstream ifile(s);
	std::string userName;
	int userID;
	if (!ifile) {
		return -1;
	}
	while (ifile) 
	{
		std::getline(ifile, userName);
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
