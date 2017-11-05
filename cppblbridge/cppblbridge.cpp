// This is the main DLL file.

#include "stdafx.h"

#include "cppblbridge.h"
using namespace cppblbridge;

CppBLBridge::CppBLBridge()
{
	m_cppBL = new Ccppbusinesslogic();
}

CppBLBridge::~CppBLBridge()
{
	delete m_cppBL;
	m_cppBL = 0;
}

int CppBLBridge::getTestValue()
{
	return m_cppBL->getTestValue();
}