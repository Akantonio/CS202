// Lab04FallCS202.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Adrian Antonio

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::ostringstream;
#include <fstream>
using std::ofstream;
using std::ifstream;
using std::fstream;

int main()
{	
	string userIn;
	string line;
	ofstream file("writing.txt",std::ios::app);
	ifstream ifile("writing.txt");
	while (!ifile.eof()) {
		getline(ifile,line);
		cout << line<< endl;
	}
	cout << "Give me number and write some text: ";
	getline(cin, userIn);
	file << userIn;
	
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
