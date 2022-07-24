#ifndef PRINTMEMUSAGE_H
#define PRINTMEMUSAGE_H

#ifndef _WIN32
	#include <sys/types.h>
	#include <unistd.h>
#else
	#include "process.h"
	typedef int pid_t;
#endif

#include <iostream>
#include <fstream>
#include <string>
#include <gmapping/utils/utils_export.h>

namespace GMapping{
	void UTILS_EXPORT printmemusage();
};

#endif
