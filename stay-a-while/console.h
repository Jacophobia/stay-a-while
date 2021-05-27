#ifndef console_h
#define console_h

#include <string>
#include <iostream>

class Console
{
public:
	void println(std::string output);

	void print(std::string output);

	void printFloat(double output);

	void printInt(int output);

	std::string get_string();

	int get_int();

	double get_float();

	char get_char();
};

#endif