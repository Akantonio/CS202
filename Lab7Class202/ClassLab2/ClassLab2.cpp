// ClassLab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Building.hpp"
#include <vector>
using std::vector;
#include<string>
using std::string;

void changeNameValue(Building b) 
{
	string s;
	cout << "Give a name: ";
	cin >> s;
	b.setName(s);
}
void changeNameReference(Building& b) 
{
	string s;
	cout << "Give a name: ";
	cin >> s;
	b.setName(s);

}Building rABuild(Building & b) {
	
	Building refB(b);
	changeNameValue(refB);
	cout << refB.getName() << " Floor: " << refB.getFloorNum() << endl;
	return refB;
}
int main()
{
	Building local("Local", 50);

	cout << local.getName() << " Floor: " << local.getFloorNum() << endl;

	changeNameValue(local);

	cout << local.getName() << " Floor: " << local.getFloorNum() << endl;

	changeNameReference(local);

	cout << local.getName() << " Floor: " << local.getFloorNum() << endl;

	vector<Building> userData(5);

	for (auto& i : userData) {
		cout << i.getName()<< " " << i.getFloorNum()<< endl;
	}
	

	for (auto & i : userData) {
		string s;
		cout << "Give a name: ";
		cin >> s;
		i.setName(s);
		int x;
		cout << "How many floors? ";
		cin >> x;
		i.floorNumChange(x);
		cout<<"the name of the building= "+ i.getName()<< endl;
		cout <<"Floors:"<< i.getFloorNum() << "\n" << endl;
	}
	
	for (auto& i : userData) {
		cout << i.getName() << " " << i.getFloorNum() <<  endl ;
	}


	Building toCopy(userData[2]);

	userData.push_back(toCopy);

	for (auto& i : userData) {
		cout << i.getName() << " " << i.getFloorNum() << endl;
	}

    cout << "Got out of loop \n";
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
