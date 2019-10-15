#ifndef BOX_HPP
#define BOX_HPP
//Adrian Antonio
//HomeWork 1 for CS202 Fall 2019 

#include <string>
#include <sstream>
using std::string;

class Box {
public:
	enum class BoxType { FILLED, HOLLOW, CHECKERED };//Change here to add another type
	Box();
	Box(int x, int y);
	Box(int x, int y,BoxType z);
	int getWidth() const;
	int getHeight()const; 
	void setWidth(int x);
	void setHeight(int x);
	string type()const;
	void print(std::ostream & s)const;
private:
	int _width;
	int _height;
	BoxType _type;
	string printBoxOutLine(int x,int y,bool logic)const;
};

#endif // !BOX_HPP

