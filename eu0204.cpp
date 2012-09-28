#include"eu0204.h"

#include"principal.h"

void eu0204 :: solucion(){
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


void eu0204 :: printsolution(){
	cout << "Euler 0204\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
