//Adrian Antonio
//Homework 2 for CS202 





#include "files.hpp"

int getIdFromFile(const std::string& s, std::istream& is, std::ostream& os)
{
	std::ifstream ifile(s);
	std::string linefile;
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
			ifile >> userName >> userID;
			if(userName==userInput)
			{
				
				os << userID;
			}
			
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
	int read=0;
	std::ifstream inputFile;
	inputFile.open(s, std::ios::in | std::ios::binary);
	while(true)
	{
		
		inputFile.read(reinterpret_cast<char*>(&read), sizeof(int));
		std::cout << "this is move :{" << move << "}\n";//DELETE THIS

		move = read;
		
		//std::cout << "this is move :[" << move<<"]\n";//DELETE THIS
		inputFile.seekg(sizeof(int) * move);

		os << move;
		if (read < 0)
		{
			break;
		}
	}
}
