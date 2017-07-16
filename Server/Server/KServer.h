#pragma once
#include "KDefine.h"
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/select.h>
#include <arpa/inet.h>
class KServer
{
public:
	KServer() {};
	~KServer() {};
	bool Init();
	void Close();
public:
	int32_t m_iFd;
};