#ifndef BUILDING_HPP
#define BUILDING_HPP

#include<iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;

class Building
{
public:
	Building();
	Building(const string & s,const int & x);
	Building(const Building & original);
	~Building();
	void setName(string s);
	void floorNumChange(int x);
	string getName()const;
	int getFloorNum()const;
private:
	string _nameOfBuilding;
	int _numOfFloor;
};

#endif 