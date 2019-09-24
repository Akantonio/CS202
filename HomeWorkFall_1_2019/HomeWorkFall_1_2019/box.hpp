#ifndef BOX_HPP
#define BOX_HPP

class Box {
public:
	Box();
	Box(int& x, int& y);
	void getWidth() const;
	void getHeight()const;
	
private:
	int _width;
	int _height;

};

#endif // !BOX_HPP

