#include "DLLTEST.h"

extern "C" __declspec(dllexport) TCHAR hgetComputerName()
{
	TCHAR name[31];
	DWORD size;
	size = sizeof(name);
	GetComputerName(name, &size);
	MessageBox(NULL, name, L"Window", MB_OK);
	return *name;
}

namespace myName
{
	 TCHAR Computer::getName()
	{
		TCHAR name1[31];
		DWORD size1;
		size1 = sizeof(name1);
		GetComputerName(name1, &size1);
		MessageBox(NULL, name1, L"Window", MB_OK);
		return *name1;
	}
}
