#include"eu0397.h"

#include"principal.h"

void eu0397 :: solucion(){
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


void eu0397 :: printsolution(){
	cout << "Euler 0397\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
