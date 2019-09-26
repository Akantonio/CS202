// BinaryFiles9_24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Adrian Antonio

#include <iostream>
using std::cout;
#include <fstream>
using std::ifstream;
#include<vector>
using std::vector;

int main()
{
	ifstream ifile;
	ifile.open("data.dat",std::ios::in|std::ios::binary);
	double total=0;
	int totalNum = 0;
	int read;
	while (true)
	{

		ifile.read(reinterpret_cast<char*>(&read), sizeof(int));
		if (!ifile) {
			if (ifile.eof()) {
				break;
			}
		}
		//ifile.read(reinterpret_cast<char*>(&x), sizeof(x));
		//cout << v[0] << " ";
		total += read;
		totalNum++;
	}
	cout << total << " ";
	cout <<totalNum;
	cout << " " << (total / totalNum);
	

    cout << " Hello World!\n";
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
