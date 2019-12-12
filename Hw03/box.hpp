#ifndef BOX_HPP
#define BOX_HPP
//Adrian Antonio
//HomeWork 3 for CS202 Fall 2019 

#include <string>
#include <sstream>
using std::string;




	class Box {
		 friend std::ostream& operator<<(std::ostream& sout, Box a);
	public:
		
		enum BoxType{ FILLED, HOLLOW, CHECKERED };//Change here to add another type
		static int howMany();
		Box();
		Box(int x, int y);
		Box(int x, int y,  Box::BoxType z);
		~Box();
		Box(const Box& orig);
		int getWidth() const;
		int getHeight()const;
		void setWidth(int x);
		void setHeight(int x);
		string type()const;
		void print(std::ostream& s)const;
	private:
		static int _numOfBox;
		int _width;
		int _height;
		BoxType _type;
		string printBoxOutLine(int x, int y, Box::BoxType type)const;
	};

	

#endif // !BOX_HPP

