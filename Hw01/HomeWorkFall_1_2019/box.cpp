//Adrian Antonio CS202 Fall 9/22/19
//Homework 1 using box test by Proffesor Hartman

#include<iostream>
#include "box.hpp"



int Box::_numOfBox = 0;

int Box::howMany()
{
	return _numOfBox;
}

Box::Box() :_width(1), _height(1), _type(BoxType::FILLED)
	{
	_numOfBox++;
	}
	Box::Box(int x, int y) : _width(x), _height(y), _type(BoxType::FILLED)
	{
		_numOfBox++;
	}
	Box::Box(int x, int y, BoxType z) : _width(x), _height(y), _type(z)
	{
		_numOfBox++;
	}

	Box::~Box()
	{
		_numOfBox--;
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



	string Box::type() const //Returns the type
	{
		switch (_type) //CHANGE HERE FOR ANOTHER TYPE
		{
		case(BoxType::HOLLOW):
			return "HOLLOW";
		case(BoxType::CHECKERED):
			return "CHECKERED";
		default:
			return "FILLED";
		}
	}

	void Box::print(std::ostream& s) const
	{
		s << printBoxOutLine(_width, _height, _type);
	}


	string Box::printBoxOutLine(int x, int y, const Box::BoxType &type) const//CHANGE HERE FOR ANOTHER BOX TYPE
	{
		int temp = y;
		string s;
		if (BoxType::CHECKERED == type) //CHECKERED
		{
			while (temp > 1)
			{
				if (temp % 2 == 1) {
					for (int i = 1; i <= x; ++i)
					{
						if (i % 2 == 1) {
							s += "x";
						}
						else {
							s += " ";
						}
					}
				}
				else {
					for (int i = 1; i <= x; ++i)
					{
						if (i % 2 == 1) {
							s += " ";
						}
						else {
							s += "x";
						}
					}
				}
				temp--;
			}

			return s;
		}
		do
		{
			if ((temp == y || (type == BoxType::FILLED) || temp == 1)) //FILLED 
			{
				for (int i = 1; i <= x; ++i)
				{
					s += "x";
				}
			}
			else if (!(temp <= 1) || (BoxType::HOLLOW == type))//HOLLOW
			{
				s += "x";
				for (int i = 1; i <= (x - 2); ++i)
				{
					s += " ";
				}
				s += "x";
			}
			s += "\n";
			--temp;
		} while (temp >= 1);

		return s;
	}

	
	std::ostream& operator<<(std::ostream& sout, Box a)
	{
		return sout;
	}
