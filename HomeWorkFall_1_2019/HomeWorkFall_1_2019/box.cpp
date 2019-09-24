//Adrian Antonio CS202 Fall 9/22/19
//Homework 1

#include<iostream>
#include "box.hpp"


Box::Box():_width(1),_height(1)
{
}
Box::Box(int & x, int &y):_width(x),_height(y)
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

void Box::setWidth()
{
}

void Box::setHeight()
{
}


