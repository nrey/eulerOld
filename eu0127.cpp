#include"eu0127.h"

#include"principal.h"

void eu0127 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0127 :: printsolution(){
	cout << "Euler 0127\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
