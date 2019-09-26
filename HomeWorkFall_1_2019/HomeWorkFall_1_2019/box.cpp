//Adrian Antonio CS202 Fall 9/22/19
//Homework 1

#include<iostream>
#include "box.hpp"


Box::Box():_width(1),_height(1),_type(true)
{
}
Box::Box(int & x, int &y,bool &z):_width(x),_height(y),_type(z)
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

}

void Box::setHeight(int x)
{

}

string Box::type(bool _type)
{
	if(_type){
		return "Filled";
	}
	else {
		return "Hollow";
	}
}


