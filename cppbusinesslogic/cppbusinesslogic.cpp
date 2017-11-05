// cppbusinesslogic.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "cppbusinesslogic.h"


// This is an example of an exported variable
CPPBUSINESSLOGIC_API int ncppbusinesslogic=0;

// This is an example of an exported function.
CPPBUSINESSLOGIC_API int fncppbusinesslogic(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see cppbusinesslogic.h for the class definition
Ccppbusinesslogic::Ccppbusinesslogic()
{
	return;
}

int Ccppbusinesslogic::getTestValue()
{
	return 77;
}
