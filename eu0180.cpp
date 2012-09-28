#include"eu0180.h"

#include"principal.h"

void eu0180 :: solucion(){
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


void eu0180 :: printsolution(){
	cout << "Euler 0180\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
