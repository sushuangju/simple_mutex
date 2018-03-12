#ifndef _SIMPLE_MUTEX_H_
#define _SIMPLE_MUTEX_H_
#include <Windows.h>

class CSimpleMutex
{
public:
	CSimpleMutex();
	~CSimpleMutex();
	void Acquire();
	void Release();
private:
	CRITICAL_SECTION m_cs;
};

#endif
