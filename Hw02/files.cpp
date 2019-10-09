//Adrian Antonio
//Homework 2 for CS202 





#include "files.hpp"

int getIdFromFile(const std::string& s, std::istream& is, std::ostream& os)
{
	std::ifstream ifile(s);
	std::string line;
	std::string lineInput;
	getline(is,lineInput);
	std::string userName;
	int userID=0;
	if (!ifile) {
		return -1;
	}
	while (true)
	{
		std::string userInput;
		is >> userInput;
		
		while (true) 
		{
			if(userName==userInput)
			{
				
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
	int temp;
	std::ifstream inputFile(s,std::ifstream::binary);

}
