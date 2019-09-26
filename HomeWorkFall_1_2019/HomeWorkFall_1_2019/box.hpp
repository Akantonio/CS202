#ifndef BOX_HPP
#define BOX_HPP


#include <string>
using std::string;

class Box {
public:
	Box();
	Box(int x, int y);
	Box(int x, int y,bool z);
	int getWidth() const;
	int getHeight()const;
	void setWidth(int x);
	void setHeight(int x);
	string type()const;
	void print(std::ostream & s)const;
private:
	int _width;
	int _height;
	bool _type;
	string filled()const;
	string hollow()const;
	string printBoxOutLine(int x,bool logic);
};

#endif // !BOX_HPP

