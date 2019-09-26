//Adrian Antonio CS202 Fall 9/22/19
//Homework 1

#include<iostream>
#include "box.hpp"


Box::Box():_width(1),_height(1),_type(true)
{
}
Box::Box(int x, int y) : _width(x), _height(y),_type(true)
{
}
Box::Box(int x, int y,bool z):_width(x),_height(y),_type(z)
{
}

int Box::getWidth() const
{
	return _width;
}

int Box::getHeight() const
{
	return _height;
}

void Box::setWidth(int x)
{
	_width = x;
}

void Box::setHeight(int x)
{
	_height = x;
}



string Box::type() const //checks if it's true and false to send out either "Filled" or "Hollow"
{
	if(_type){
		return "Filled";
	}
	else {
		return "Hollow";
	}
}

void Box::print(std::ostream & s) 
{
	s << printBoxOutLine(_width,_height,_type);
}


string Box::printBoxOutLine(int x,int y,bool logic) const
{ 
	int temp = y;
	string s;
	do
	{
		for (int i = 1; i <= x; ++i) {
			s += "X";
		}
		s += "\n"; //Prints first line
		--temp;
	} while (temp>=1);

	

	return s;
}

