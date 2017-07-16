
#include "KServer.h"

bool KServer::Init()
{
	bool bResult = false;
	bool bReturn = false;
	int32_t iReturn = 0;
	m_iFd = socket(AF_INET, SOCK_STREAM, 0);
	LOG_ERROR(-1 == m_iFd, "socket error");
	
	struct sockaddr_in stBindAddr;
	stBindAddr.sin_family = AF_INET;
	stBindAddr.sin_port = htons(SERVER_PORT);
	stBindAddr.sin_addr.s_addr = htonl(SERVER_IP);
	iReturn = bind(m_iFd, (struct sockaddr*)&stBindAddr, sizeof(stBindAddr));
	LOG_ERROR(-1 == iReturn, "bind error");
	iReturn = listen(m_iFd, 1024);
	LOG_ERROR(-1 == iReturn, "listen error");

	bResult = true;
Exit0:
	if (!bResult)
	{
		Close();
	}
	return bResult;
}
void KServer::Close()
{
	close(m_iFd);
}