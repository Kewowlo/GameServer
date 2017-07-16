#pragma once

#include <iostream>
#define int32_t int
#define int16_t short
#define int64_t __int64

#define LOG_DEBUG std::cout << __FILE__ << ":" << __LINE__ << "{" << __FUNCTION__ << "}|DEBUG|"
#define LOG_ERROR(Condition,error) do{\
	if((Condition)){\
		std::cout << __FILE__ << ":" << __LINE__ << "{" << __FUNCTION__ << "}|ERROR|"<<error<<std::endl;\
		goto Exit0;\
	}\
}while(0)


#define SERVER_IP 0
#define SERVER_PORT 10010
#define CLIENT_IP 0
#define CLIENT_PORT 10030