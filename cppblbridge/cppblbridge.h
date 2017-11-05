// cppblbridge.h

#pragma once

#include "../cppbusinesslogic/cppbusinesslogic.h"

using namespace System;

namespace cppblbridge {

	public ref class CppBLBridge
	{
	private:
		Ccppbusinesslogic* m_cppBL;
	public:
		CppBLBridge();
		~CppBLBridge();

		int getTestValue();
	};
}
