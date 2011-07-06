#include <curl/curl.h>
#include <libxml/parser.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "cas.h"

#ifndef CAS_INT_H
#define CAS_INT_H

#ifdef DEBUG
#define debug(format, args...) fprintf(stderr,"[%s(%d):%s] " format "\n", __FILE__,__LINE__,__func__,## args)
#else
#define debug(format, args...)
#endif

struct CAS {
	CURL* curl;


	CAS_CODE code;
	union{
		char* principal;
		char* message;
	};
	//hashmap? attributes;


};




#endif
