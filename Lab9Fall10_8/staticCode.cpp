#include"staticCode.hpp"

int globalS::getNum()
{
	++num;
	return num;
}


int globalS::num = 199;