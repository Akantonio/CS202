//Adrian Antonio
//Homework 2 for CS202 





#include "files.hpp"

int getIdFromFile(const std::string& s, std::istream& is, std::ostream& os)
{
	std::ifstream ifile(s);
	std::string lineInput;
	getline(is,lineInput);
	int sendingUserId;
	if (!ifile) {
		return -1;
	}
	while (true)
	{
		std::string userInput;
		is >> userInput;
		
		sendingUserId=readingFromFile(s,userInput);
		if (sendingUserId == -1) {
			os << "error\n";
		}else{
			os << sendingUserId << "\n";
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
					
			return userID;
		}

		if (!checkFile)
		{
			if (checkFile.eof())
			{
				return -1;
			}
		}
	}
	return -1;
}


