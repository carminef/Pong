#pragma once
#include <stdexcept>
#include <string>
#ifndef MYEXCPT_H_INCLUDED
#define MYEXCPT_H_INCLUDED
#endif // !MYEXCPT_H_INCLUDED
class myException :
	public std::runtime_error
{
public:
	myException(char* value, int return_value);
	~myException();
	int return_value;
};

