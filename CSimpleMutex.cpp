#include "CSimpleMutex.h"

CSimpleMutex::CSimpleMutex()
{
	::InitializeCriticalSection(&m_cs);
}

CSimpleMutex::~CSimpleMutex()
{
	::DeleteCriticalSection(&m_cs);
}

CSimpleMutex::Acquire()
{
	::EnterCriticalSection(&m_cs);
}

CSimpleMutex::Release()
{
	::LeaveCriticalSection(&m_cs);
}
