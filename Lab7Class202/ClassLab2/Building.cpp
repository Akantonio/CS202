#include "Building.hpp"



Building::Building():_nameOfBuilding("None"),_numOfFloor(1)
{
	std::cout << "made a none build";
}

Building::Building(const string & s,const int & x):_nameOfBuilding(s),_numOfFloor(x)
{
	std::cout << "made a build";
}

Building::Building(const Building& original):_nameOfBuilding(original.getName()),_numOfFloor(original.getFloorNum())
{
	std::cout << "copied stuff here\n";
}

Building::~Building()
{
	std::cout << " destroyed a building \n";
}

void Building::setName(string s) {
	_nameOfBuilding = s;
}


void Building::floorNumChange(int x) {
	_numOfFloor= x;
}

string Building::getName() const {
	
	return _nameOfBuilding;
}

int Building::getFloorNum() const{
	return _numOfFloor;
}

std::ostream& operator<<(std::ostream& os, const Building& b)
{
	return os << "The building name: " << b._nameOfBuilding << "The number of floors: " << b._numOfFloor;
}
