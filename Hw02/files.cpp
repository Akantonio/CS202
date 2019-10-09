//Adrian Antonio
//Homework 2 for CS202 





#include "files.hpp"

int getIdFromFile(const std::string& s, std::istream& is, std::ostream& os)
{
	std::ifstream ifile(s);
	std::string lineInput;
	getline(is,lineInput);
	if (!ifile) {
		return -1;
	}
	while (true)
	{
		std::string userInput;
		is >> userInput;
		std::cout << "{" << userInput << "}\n";//test
		if (!is) {
			if (is.eof())
			{
				std::cout << "{" << "IS.EOF AT BREAK" << "}\n";//test
				break;
			}
		}
		std::cout << "[" << "OUTSIDE" << "]\n";//test
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
		

		move = read;
		
		
		inputFile.seekg(sizeof(int) * move);

		os << move<<std::endl;

		if (read < 0)
		{
			break;
		}
	}
}

const int readingFromFile(const std::string& fs,std::string s)
{	
	std::string userName;
	int userID;
	std::ifstream checkFile(fs);
	while (true)
	{
		checkFile >> userName >> userID;
		if (userName == s)
		{
			std::cout << "{" << userID << "}\n";
			std::cout << "{" << "BEFORE ADDING TO OS" << "}\n";
			return userID;
		}

		if (!checkFile)
		{
			if (checkFile.eof())
			{
				std::cout << "{" << "IFILE.EOF AT BREAK" << "}\n";
				break;
			}
		}
	}
	return 0;
}


