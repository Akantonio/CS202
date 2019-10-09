//Adrian Antonio Homework 2

#ifndef FILES_HPP
#define FILES_HPP

#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>

int getIdFromFile(const std::string& s, std::istream& is, std::ostream& os);

void numberChase(const std::string & s, std::ostream & os);

const int readingFromFile(const std::string&fs,std::string);

#endif // !FILES_HPP

