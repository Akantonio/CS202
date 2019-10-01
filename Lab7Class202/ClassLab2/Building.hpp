#ifndef BUILDING_HPP
#define BUILDING_HPP

#include<iostream>
#include <string>
using std::string;

class Building
{
	friend std::ostream& operator<<(std::ostream& os, const Building& b);
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