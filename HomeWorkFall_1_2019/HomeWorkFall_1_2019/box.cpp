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

void Box::print(std::ostream & s) const
{
	s << printBoxOutLine(_width,_height,_type);
}


string Box::printBoxOutLine(int x,int y,bool logic) const
{ 
	int temp = y;
	string s;
	do
	{
		if ((temp == y||logic)||temp==1) //if temp is the same as y or its a filled  box 
		{
			for (int i = 1; i <= x; ++i) 
			{
				s += "X";
			}
		}
		else if(!(temp<=1)||!logic)//the middle of the box if hollow
		{
			s += "X";
			for (int i = 1; i <= (x - 2); ++i) 
			{
				s += " ";
			}
			s += "X";
		}
		s += "\n"; 
		--temp;
		std::cout << s << std::endl;//DELETE IF THE TEST Succeeds this is a check to see what it prints out
	} while (temp>=1);

	return s;
}

