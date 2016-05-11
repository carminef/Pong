#ifndef MYEXCPT_H_INCLUDED
#include "myException.h"
#endif // !MYEXCPT_H_INCLUDED


myException::myException(char* value, int return_value): 
	runtime_error(value) ,return_value(return_value)
{
}


myException::~myException()
{
}
