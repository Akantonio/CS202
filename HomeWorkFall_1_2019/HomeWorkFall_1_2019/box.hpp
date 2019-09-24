#ifndef BOX_HPP
#define BOX_HPP

class Box {
public:
	Box();
	Box(int& x, int& y);
	int getWidth() const;
	int getHeight()const;
	void setWidth();
	void setHeight();
	
private:
	int _width;
	int _height;

};

#endif // !BOX_HPP

