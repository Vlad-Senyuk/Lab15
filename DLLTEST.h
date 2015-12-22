#pragma once

#ifndef _DLLTEST_H_
#define _DLLTEST_H_ 

#include <iostream>
#include <Windows.h> 

extern "C" __declspec(dllexport) TCHAR hgetComputerName();

namespace myName
{
	class Computer
	{
	public:
		Computer() {};
		static _DLLTEST_H_ TCHAR getName();
		~Computer() {};
	};
}
#endif 
