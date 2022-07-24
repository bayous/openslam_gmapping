#include "gmapping/utils/printmemusage.h"

namespace GMapping{

using namespace std;
void printmemusage(){
	char procfilename[1000];

#ifndef _WIN32
	pid_t pid = getpid();
	sprintf(procfilename, "/proc/%d/status", pid);
#else
	pid_t pid = _getpid();
	sprintf_s(procfilename, "/proc/%d/status", pid);
#endif

	ifstream is(procfilename);
	string line;
	while (is){
		is >> line;
		if (line=="VmData:"){
			is >> line;
			cerr << "#VmData:\t" << line << endl; 
		}
		if (line=="VmSize:"){
			is >> line;
			cerr << "#VmSize:\t" << line << endl; 
		}
			
	}
}

};

