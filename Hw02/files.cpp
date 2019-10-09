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
	int userID;
	if (!ifile) {
		return -1;
	}
	while (true)
	{
		std::getline(is, userInput);
		std::cout << userInput << "\n";//test
		do 
		{
			ifile >> userName >> userID;
			if (userInput == userName)
			{
				os << userID;
				return 0;

			}else if(!is)
			{
				if (is.eof())
				{
					std::cout << "error";
					break;
				}
			}
		} while (userName != userInput);

		//while (ifile)
		//{

		//	std::getline(ifile, line);
		//	ifile >> userName >> userID;
		//	//std::cout << " !1" << userName << " " << userID << std::endl;//test

		//	if (userName == userInput) {
		//		os << userID;
		//		return 0;
		//	}
		//	if (!ifile)
		//	{
		//		if (ifile.eof())
		//		{
		//			break;
		//		}
		//	}
		//}
		if (!is)
		{
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
	inputFile.seekg(move,sizeof(int));
}
