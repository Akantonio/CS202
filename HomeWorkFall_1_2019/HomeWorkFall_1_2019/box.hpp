#ifndef BOX_HPP
#define BOX_HPP


#include <string>
using std::string;

class Box {
public:
	Box();
	Box(int& x, int& y);
	int getWidth() const;
	int getHeight()const;
	void setWidth(int x);
	void setHeight(int x);
	string type();
private:
	int _width;
	int _height;

};

#endif // !BOX_HPP

