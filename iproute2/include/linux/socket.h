#ifndef _LINUX_SOCKET_H
#define _LINUX_SOCKET_H

#define _K_SS_MAXSIZE	128	
#define _K_SS_ALIGNSIZE	(__alignof__ (struct sockaddr *))
				

struct __kernel_sockaddr_storage {
	unsigned short	ss_family;		
	
	char		__data[_K_SS_MAXSIZE - sizeof(unsigned short)];
				
				
} __attribute__ ((aligned(_K_SS_ALIGNSIZE)));	

#endif 
